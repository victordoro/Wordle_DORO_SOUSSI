#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "dico.h"

int main (int argc, char *argv[]){

// Vérification du nombre d'arguments.
    if (argc != 3) {
        printf ("Wrong argument. Expected <nb initial points>.\n") ;
        return (-1) ;
    }


// Création du nouveau dico avec que des mots de 5 lettres.
    if (dico_5_lettres(argv[1],argv[2])==false) {return(-1);}


// Début de la partie
    printf("Début de partie\nVoici les règles :\nIl faut deviner un mot de 5 lettres en 6 essais\nà chaque essai est précisé\nsi la lettre n'est pas présente : .\nsi la lettre est présente mais pas au bon endroit : O\nsi la lettre est bien placée : X\nBonne Chance !!\n");

    return 0;
}

