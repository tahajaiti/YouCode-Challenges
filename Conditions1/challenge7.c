#include <stdio.h>

int main(){

    char a;

    printf("\nEntrez un lettre: ");
    scanf(" %c", &a); 

    int asci = a;

    if (asci >= 65 && asci <= 90)
    {
        printf(" %c est majiscule\n", a);
    }
    else
        printf(" %c est miniscule\n", a);

    return 0;
}