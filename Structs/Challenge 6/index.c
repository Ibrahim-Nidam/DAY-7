#include <stdio.h>

typedef struct {
    char nom[20];
    int prix;
    int quantite;
}Produit;


Produit produits[3] ;

int main(){

    for (int i=0 ; i < 3 ; i++){
        printf("Entrez le nom du produit %d : ",i+1);
        scanf(" %s",produits[i].nom);
        printf("Entrez le prix du produit %d : ",i+1);
        scanf(" %d",&produits[i].prix);
        printf("Entrez la quantite du produit %d : ",i+1);
        scanf(" %d",&produits[i].quantite);
    }

    printf("=======Information des produits=======\n");

    for (int i=0 ; i < 3 ; i++){
        printf("Entrez le nom du produit %d : %s.\n",i+1,produits[i].nom);
        printf("Entrez le prix du produit %d : %d.\n",i+1,produits[i].prix);
        printf("Entrez la quantite du produit %d : %d.\n\n",i+1,produits[i].quantite);
    }





    return 0;
}