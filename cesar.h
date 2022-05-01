/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                                                  *
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
*  Nom du fichier : cesar.h                                                  *
*                                                                             *
******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fonctions.h"

char chiffrerCesarCar(int cle, char c);
char dechiffrerCesarCar(int cle, char c);
char* chiffrerCesar(char* chaine, int cle);
char* dechiffrerCesar(char* chaine, int cle);