#include <stdio.h>

int main (){

    int nombre;

    printf("\nEnterz un nombre de 4 chiffres [ex. 1234]: ");
    scanf("%d", &nombre);

    if (nombre < 1000 || nombre > 9999) {
        printf("\nEntrez un nombre de 4 chiffres");
        return 1;
    }

    int premier = nombre / 1000;
    int deuxieme = (nombre / 100) % 10;
    int troisieme = (nombre / 10) % 10;
    int quatrieme = nombre % 10;

    printf("L'inverse de cette nombres et %d%d%d%d", quatrieme, troisieme, deuxieme, premier);
 
    return 0;
}