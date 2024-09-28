#include <stdio.h>

void convert(int year) {
    int months = year * 12;
    int days = year * 365;
    long long hours = days * 24;
    long long minutes = hours * 60;
    long long seconds = minutes * 60;

    printf("\nAnne %d sur :", year);
    printf("\nMois : %d", months);
    printf("\nJours : %d", days);
    printf("\nHeures:  %ld", hours);
    printf("\nMinutes : %ld", minutes);
    printf("\nSecondes : %ld", seconds);
}

int main() {
    int choice, year;

    do {
        printf("\nMenu de conversion d'année:\n");
        printf("1. Convertir une année\n");
        printf("2. Quitter\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Entrez le nombre de annees:");
                scanf("%d", &year);
                convert(year);
                break;
            case 2:
                printf("Adios\n");
                break;
            default:
                printf("option pas valide, ressayez.\n");
        }
    } while (choice != 2);

    return 0;
}
