#include <stdio.h>

int main(){
    int num, count = 0;

    printf("entrez un nombre: ");
    scanf("%d", &num);


    while (num > 0)
    {
        count++;
        num = num/10;
    }
    
    printf("le nombre de chiffres est: %d", count);

    return 0;
}