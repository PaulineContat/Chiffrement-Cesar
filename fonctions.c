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
*  Nom du fichier : fonctions.c                                               *
*                                                                             *
******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonctions.h"

int getAsciiCar(char c) {
	return("%d", c);
}


char* saisieChaine(){
	char* chaine = NULL;
	size_t taille = 0;
	int tailleChaine = getline(&chaine, &taille, stdin);
	return chaine;
}


int verifAccent(char* chaine){
	for (int i=0;i<strlen(chaine);i++){
		if(getAsciiCar(chaine[i]<0) || getAsciiCar(chaine[i])>126){
            return -1;
        }
    else {
    	return 0;
	}
}
}
