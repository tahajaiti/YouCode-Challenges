#include <stdio.h>

int main() {
    int age, type, accidents;
    double prime, primebase;

    printf("\nentrez le Âge du conducteur (en années): ");
    scanf("%d", &age);

    printf("\nentrez le Nombre d'accidents au cours des 5 dernières années: ");
    scanf("%d", &accidents);

    printf("\nentrez le Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d", &type);

    printf("\nentrez le prime de base: ");
    scanf("%lf", &primebase);

    /*Conducteur de moins de 25 ans : Prime de base * 1.5
    Conducteur de 25 à 65 ans : Prime de base
    Conducteur de plus de 65 ans : Prime de base * 1.2*/

    if (age < 25) {
        prime = primebase * 1.5;
    } else if (age <= 65) {
        prime = primebase;
    } else {
        prime = primebase * 1.2;
    }
    
    /*Type de voiture sportive : Prime * 2
    Type de voiture utilitaire : Prime * 1.2
    Type de voiture familiale : Prime * 1.1*/

    switch (type) {
    case 1:
        prime *= 2;
        break;
    case 2:
        prime *= 1.2;
        break;
    case 3:
        prime *= 1.1;
        break;
    default:
        printf("\nentrez une type de voiture valide");
        return 1;
    }

    /*Nombre d'accidents > 1 : Ajoutez 30% à la prime*/

    if (accidents > 1) {
        prime *= 1.3;
    }
    
    printf("\nLa prime d'assurance est : %.2f", prime);

    return 0;
}
