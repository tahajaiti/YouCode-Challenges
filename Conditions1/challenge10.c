#include <stdio.h>
#include <string.h>

int main() {
    char date[11];
    char datename[11];
    char day[3];
    char year[5];
    char *months[] = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
    };

    printf("\nentrez la date en forme de [DD/MM/YYYY] : ");
    scanf("%10s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0'; 

    int index = (date[3] - '0') * 10 + (date[4] - '0') - 1; //DD/MM/YYYY 16/12/2024
    printf("%d/n", index);
    if (index >= 0 && index < 12) {
        strcpy(datename, months[index]);
    } else {
        printf("Mois invalide!\n");
        return 1;
    }

    printf("la date est: %s-%s-%s\n", day, datename, year);

    return 0;
}
