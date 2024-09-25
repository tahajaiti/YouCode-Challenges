#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe; 
    char adresse_email[100];
    int age;

    printf("Entrez votre nom: ");
    scanf("%49s", &nom); 

    printf("Entrez votre prenom: ");
    scanf("%49s", &prenom); 

    printf("Entrez votre sexe [M] ou [F]: ");
    scanf(" %c", &sexe); 

    printf("Entrez votre age: ");
    scanf("%d", &age);

    printf("Entrez votre adresse email: ");
    scanf("%99s", &adresse_email); 

    printf("\nNom: %s", nom);
    printf("\nPrenom: %s", prenom);
    printf("\nSexe: %c", sexe);
    printf("\nAge: %d", age);
    printf("\nAdresse Email: %s", adresse_email);

    return 0;
}
