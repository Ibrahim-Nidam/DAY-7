#include <stdio.h>

int main(){
    typedef struct {
        char nom[25];
        char prenom[25];
        int note[3];
    }Person;

    Person p1 = {"ibrahim", "nidam"};

    for(int i = 0 ; i < 3 ; i++){
        printf("Entrez la %d note : ",i+1);
        scanf(" %d",&p1.note[i]);
    }

    printf("%s %s. ",p1.nom,p1.prenom);
    printf("Notes : ");


    for(int i = 0 ; i < 3 ; i++){
        printf("%d ",p1.note[i]);
    }
    return 0;
}