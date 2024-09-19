#include <stdio.h>


int main(){
    typedef struct {
        char nom[25];
        char prenom[25];
        int age;
    }Person;

    Person p = {"ibrahim", "nidam", 26};
    printf("%s %s, %d ans.",p.nom,p.prenom,p.age);
    return 0;
}