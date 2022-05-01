# Chiffrement-Cesar

# Chiffrement des messages
Projet réalisé par CONTAT Pauline, LEMIRE Elléa et WAZYDRAG Théo (B1)

Ce projet est disponible via ce lien : https://github.com/PaulineContat/Chiffrement-Cesar ( Nous vous conseillons de lire le README directement sur la page d'accueil du projet via GitHub ).

Notre projet utilise 2 fonctionnalités distinctes telles que le codage et le décodage en César de saisie de texte

Elle fonctionne avec l'ensemble des caractères, aussi bien les lettres que les caractères spéciaux de la table ASCII de base.
Cela comprend donc les lettres majuscules et minuscules que l'application utilise 

# Utilisation de ce projet

Avant tous, il est nécessaire de compiler l'entièreté des fichiers, pour cela il faut utiliser le makefile fourni dans le git, puis ensuite taper les commandes makeall et enfin pour mettre en route le programme il faut taper la commande ./main. Ces commandes nécessitent pour le bon fonctionnement un terminal sous Linux.
# Documentation des fonctions

# cesar.c
• char chiffrerCesarCar(int cle, char c)
entrée : entier Nombre de décalages à appliquer vers l’avant.
caractère Le caractère à chiffrer.
sortie : caractère Le caractère chiffré.
Permet de chiffrer un caractère avec un décalage donné (clé), modulo 26. Fonctionne à partir des valeurs ASCII des caractères. Code les majuscules en majuscules et les minuscules en minuscules. Les chiffres, les caractères spéciaux de la table ASCII de base restent intacts, de même que les espaces qui sont conservés.
• char dechiffrerCesarCar (int cle, char c)
entrée : entier Nombre de décalages à appliquer vers l’arrière.
caractère Le caractère à déchiffrer
sortie : caractère Le caractère déchiffré
Permet de déchiffrer un caractère avec un décalage connu (clé), modulo 26. Fonctionne à partir des valeurs ASCII des caractères. Déchiffre les majuscules en majuscules et les minuscules en minuscules. Les chiffres, les caractères spéciaux de la table ASCII de base restent intacts, de même que les espaces qui sont conservés.
• char* chiffrerCesar(char* chaine, int cle)
entrée : chaîne chaîne à coder 
entier Nombre de décalage à appliquer en avant
sortie : chaîne Chaîne chiffrée
Permet de coder une chaine de caractères, caractère par caractère, en faisant appel à la fonction chiffrerCesarCar.
• char* dechiffrerCesar (char* chaine, int cle)
entrée : chaîne Chaîne à coder 
entier Nombre de décalages à appliquer vers l’avant
sortie : chaîne Chaîne chiffrée
Permet de décoder une chaine de caractères, caractère par caractère, en faisant appel à la fonction dechiffrerCesarCar.

#fonctionsCommunes.c

###  •  int getAsciiCar(char c)
entrée : (caractère) caractère dont on souhaite connaître la valeur ASCII

sortie : (entier) valeur ASCII du caractère
Permet de connaître la valeur ASCII d'un caractère donné

###  •  char* saisieChaine()
sortie : (chaîne) chaîne (son adresse) saisie par l'utilisateur

Permet de demander à l'utilisateur de saisir une chaîne de caractères, et de l'enregistrer.

###  •  int verifAccent(char* string)
Entrée : (chaîne) chaîne de caractères à vérifier

Sortie : (entier) 0 si la chaîne est correcte, 1 si la chaîne est incorrect 

Permet de vérifier si la chaine donnée ne contient pas de caractère avec des accents
L’application réussi aussi bien à traiter les lettres majuscules et minuscules 
Les caractères spéciaux utilisables sont les suivants : ! " # $ % & ' ( ) * + - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @

L'application renvoie 1 (erreur) pour tout autre caractère non mentionné ci-dessus, ce qui comprend notamment les accents.
