#include <stdio.h>

int main(){

    int num;

    printf("\nentrez un nombre: ");
    scanf("%d", &num);

    int calcul = num % 2;

    if (calcul == 0)
    {
        printf("\n%d est un nombre pair", num);
    }
    else
        printf("\n%d est un nombre impair", num);
    
    return 0;
}