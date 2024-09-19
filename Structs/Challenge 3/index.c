#include <stdio.h>

float calcAire(float longeur,float largeur){
    return printf("Aire = %.2f",longeur * largeur);
}

int  main() {
    typedef struct {
        float longeur;
        float largeur;

    }Aire;

    Aire rec;

    printf("entrez la longeur :");
    scanf(" %f",&rec.longeur);
    printf("entrez la largeur :");
    scanf(" %f",&rec.largeur);

    calcAire(rec.longeur,rec.largeur);

    return 0;
}
