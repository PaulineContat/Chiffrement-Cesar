/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : LEMIRE Elléa                                                 *
*                                                                             *
*  Nom-prénom2 : CONTAT Pauline                                               *
*                                                                             *
*  Nom-prénom3 : WAZYDRAG Théo                                                *
*                                                                             *
*  Nom-prénom4 :                                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonctions.h"
#include "cesar.h"

void main() {

char* chaine;
int choix=0;
int cle=0;


//MESSAGE ACCUEIL
printf("Bienvenue dans l'application de chiffrement de messages.\n");

//LECTURE CHAINE
printf("Veuillez entrer une chaine de caractères, sans accents.\n");
chaine=saisieChaine();

//AFFICHAGE CHAINE
printf("Voici le message que vous voulez coder : %s\n", chaine);

//VERIF CHAINE VALIDE
if (verifAccent(chaine)==-1){
	printf("Erreur : La chaine ne peut être traitée.\n");
} else {


//CHAINE VALIDEE

	//CHOIX
	printf("Veuillez taper 1 si vous voulez coder votre chaîne en César ou 2 si vous voulez décoder votre chaîne codée en César.\n");
	scanf("%d", &choix);
	printf("\nVotre choix est : %d\n\n",choix);


	//ERREUR CHOIX
	while (choix<1 || choix>2){
		printf("\nVotre choix n'est pas compris entre 1 ou 2 veuillez faire un autre choix.");
		scanf("%d", &choix);
	}

	//CHOIX CLE
	printf("Choisissez de combien vous voulez décaler le message entre 1 et 26.\n");
	scanf("%d", &cle);
	printf("\nVotre clé est : %d\n\n",cle);


	//ERREUR CLE
	while (cle<0 || cle>26){
		printf("Le décalage doit être compris entre 1 et 26. Veuillez saisir une valeur correcte.\n");
			scanf("%d", &cle);
		}

	//AFFICHAGE CHAINE CHIFFREE
	if (choix==1){
		printf("Vous avez choisi de coder votre chaîne en César avec une clé de %d\n\n", cle);
		printf("Voici le message codé en César :\n");
		printf("%s", chiffrerCesar(chaine, cle));

	} else
	//AFFICHAGE CHAINE DECHIFFREE
		if (choix==2){
			printf("Vous avez choisi de décoder votre chaîne codée en César avec une clé de %d\n", cle);
			printf("Voici le message décodé:\n");
			printf("%s", dechiffrerCesar(chaine, cle));
			}
		}
	}
