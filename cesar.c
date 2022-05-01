/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                               *
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
*  Nom du fichier : cesar.c                                                   *
*                                                                             *
******************************************************************************/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cesar.h"
#include "fonctions.h"

char chiffrerCesarCar(int cle, char c) {
    if((getAsciiCar(c)>=32 && getAsciiCar(c)<=64) || (getAsciiCar(c)>=91 && getAsciiCar(c)<=96) || (getAsciiCar(c)>=123 && getAsciiCar(c)<=126)){
        return c;
    }
    else if(getAsciiCar(c)>=65 && getAsciiCar(c)<=90) {
        if(getAsciiCar(c)+cle<=90){
            return getAsciiCar(c)+cle;
        }
        else {
            return ((getAsciiCar(c)+cle)-26);
        }
    }
    else if (getAsciiCar(c)>=97 && getAsciiCar(c)<=122){
        if(getAsciiCar(c)+cle<=122){
            return getAsciiCar(c)+cle;
        }
        else { 
            return getAsciiCar(c)+cle-26;
        }
    }
}

char dechiffrerCesarCar(int cle, char c) {
    if((getAsciiCar(c)>=32 && getAsciiCar(c)<=64) || (getAsciiCar(c)>=91 && getAsciiCar(c)<=96) || (getAsciiCar(c)>=123 && getAsciiCar(c)<=126)){
        return c;
    }
    else if(getAsciiCar(c)>=65 && getAsciiCar(c)<=90){
        if(getAsciiCar(c)-cle>=65){
            return getAsciiCar(c)-cle;
        }
        else{
            return ((getAsciiCar(c)-cle)+26);
        }
    }
    else if (getAsciiCar(c)>=97 && getAsciiCar(c)<=122){
        if(getAsciiCar(c)-cle>=97){
            return getAsciiCar(c)-cle;
        }
        else {
            return getAsciiCar(c)-cle+26;
        }
    }
}

char* chiffrerCesar(char* chaine, int cle) {
    char* chaineCodee = chaine;

    for(int i=0; i<strlen(chaine); i++) {
        chaineCodee[i] = chiffrerCesarCar(cle, chaine[i]);
    }
    return chaineCodee;
}

char* dechiffrerCesar(char* chaine, int cle) {
    char* chaineCodee = chaine;

    for(int i=0; i<strlen(chaine); i++) {
        chaineCodee[i] = dechiffrerCesarCar(cle, chaine[i]);
    }
    return chaineCodee;
}