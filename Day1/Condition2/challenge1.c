#include <stdio.h>
#include <string.h>

int main(){
    int score,revenu,duree;

    printf("\nentrez votre Revenu Annuel en euro: ");
    scanf("%d", &revenu);

    printf("\nentrez votre Score de crédit (sur 1000): ");
    scanf("%d", &score);

    if (score > 1001){
        printf("\nentrez une Score de crédit valide (sur 1000)");
        return 1;
    }

    printf("\nentrez votre Durée du prêt (en années): ");
    scanf("%d", &duree);

    if (duree < 0 || duree > 100){
        printf("\nentrez une Durée du prêt valide");
        return 1;
    }

    //Revenu >= 30 000 € et Score de crédit >= 700 et Durée du prêt <= 10 ans : Éligible
    //Revenu >= 30 000 € et Score de crédit >= 650 et Durée du prêt <= 15 ans : Éligible avec conditions
    //Revenu < 30 000 € ou Score de crédit < 650 ou Durée du prêt > 15 ans : Non éligible
    if (revenu >= 30000 && score >= 700 && duree <= 10){
        printf("\nvotre éligibilité est: Éligible");}
    else if (revenu >= 30000 && score >= 650 && duree <= 15){
        printf("\nvotre éligibilité est: Éligible avec conditions");}
    else if (revenu < 30000 || score < 650 || duree > 15){
        printf("\nvotre éligibilité est: Non éligible");}
    else {
        printf("\nvotre information est: invalide");
    }

    return 0;
}