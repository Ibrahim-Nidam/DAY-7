#include <stdio.h>
#include <string.h>

typedef struct{
    char titre[100];
    char auteur[50];
    int annee;
}Livre;

Livre retour(char titre[], char auteur[], int annee){
    Livre li;
    strcpy(li.titre, titre);
    strcpy(li.auteur, auteur);
    li.annee= annee;
    return li;
}


int main(){

    Livre livre  = retour("Le Seigneur des Anneaux", "J.R.R. Tolkien", 1950);

    printf("Titre: %s, Auteur %s. Annee : %d\n",livre.titre,livre.auteur,livre.annee);


    return 0;
}