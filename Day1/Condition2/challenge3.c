#include <stdio.h>
#include <math.h>

int main(){
    int caccord, cutil, status;
    int restant;

    printf("\nentrez le Nombre total de jours de congés accordés: ");
    scanf("%d", &caccord);

    printf("\nentrez le Nombre de jours de congés utilisés: ");
    scanf("%d", &cutil);

    printf("\nentrez le Statut de l'employé (0 pour temps partiel, 1 pour temps plein) ");
    scanf("%d", &status);

    /*Temps plein : Jours restants = Jours accordés - Jours utilisés
    Temps partiel : Jours restants = (Jours accordés / 2) - Jours utilisés
    Si les jours utilisés dépassent les jours accordés, affichez un message d'alerte.*/

    if (cutil > caccord){
        printf("alerte, vous dépassez vos jours de vacances");
    }

    switch (status){
    case 0:
        restant = (caccord / 2) - cutil;
        if (restant < 0){
            restant = abs((caccord / 2) - cutil);
            printf("alerte, vous dépassez vos jours de vacances de: %d", restant);
        }
        else
        printf("Jours restants de temps partiel est: %d", restant);
        break;
    case 1:
        restant = caccord - cutil;
        if (restant < 0){
            restant = abs((caccord / 2) - cutil);
            printf("alerte, vous dépassez vos jours de vacances de: %d", restant);
        }
        else
        printf("Jours restants de temps plein est: %d", restant);
        break;
    default:
        printf("entrez status de lemploye valid");
        return 0;
        break;
    }

    return 0;
}