#include <stdio.h>

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;


int main(){

      // Create a Date struct variable
    Date date;

    // Create a pointer to the Date struct
    Date *dateF = &date; // Point to the date variable

    dateF -> jour = 18;
    dateF -> mois = 10;
    dateF -> annee = 1800;

    printf("Date: %02d/%02d/%d\n", dateF->jour, dateF->mois, dateF->annee);

    
    return 0;
}