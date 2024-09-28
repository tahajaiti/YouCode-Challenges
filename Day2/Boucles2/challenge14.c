#include <stdio.h>

int main(){
    int choice;
    char *months[] = {
        "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
    };
    
    for (int i = 0; i < 12; i++){
        printf("\n %d. %s", i+1, months[i]);}
    
    printf("\nchoisir un mois: \n");
    scanf("%d", &choice);

    for (int i = 0; i > 12; i++){
        printf("\n %d. %s", i+1, months[i]);}

    return 0;
}