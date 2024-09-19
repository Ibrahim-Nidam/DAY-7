#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];  
    float balance;  
} CompteBancaire;

void changerMontant(CompteBancaire *account, float amount) {
    account->balance += amount; 
}

int main() {
    CompteBancaire compte; 

    // Initialize the compte
    strcpy(compte.name, "Ibrahim Nidam");
    compte.balance = 1000.00; // Initial balance

    printf("compte Holder: %s\n", compte.name);
    printf("Balance initiale: %.2f\n", compte.balance);

    // Add an amount to the balance
    float montantAjoute;
    printf("Enterez montant a ajouter au balance: ");
    scanf("%f", &montantAjoute);
    
    changerMontant(&compte, montantAjoute); // Pass the address of compte

    // Display updated balance
    printf("Balance A jour: %.2f\n", compte.balance);

    return 0;
}
