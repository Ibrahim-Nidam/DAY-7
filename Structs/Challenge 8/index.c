#include <stdio.h>
#include <math.h>

const float PI = 3.14159;

typedef struct {
    float area;
    float r;
}AireC;

AireC calcularAire(float r) {
    AireC aire;
    aire.r = r;
    aire.area = pow(aire.r, 2) * PI;
    return  aire;
}

int main(){
    float n;
    printf("Entrez  le rayon du cercle : ");
    scanf(" %f",&n);

    AireC result = calcularAire(n);

    printf("Aire du cercle : %.2f\n", result.area);

    return 0;
}