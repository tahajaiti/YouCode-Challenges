#include <stdio.h>

int main(){
    int n, count=0;
    float moyenne, somme=0;

    printf("\nentrer une série de chiffres terminée par 0: ");

    while (1){
        scanf("%d", &n);
        if (n == 0){break;}

        somme += n;
        count++;
    }
    
    if (count != 0){
        moyenne = somme/count;
        printf("\nle moyenne est: %.2f", moyenne);}
    else
        printf("\nchiffres invalide.");

    return 0;
}