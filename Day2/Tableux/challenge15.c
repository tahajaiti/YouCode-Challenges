#include <stdio.h>

int main() {
    int n1,n2,n3;

    printf("\ncombien de chiffres vas-tu saisir pour le premier tableu: ");
    scanf("%d", &n1);

    int num1[n1];

    for (int i =0; i<n1;i++){
    printf("\nEntrez une chiffre %d : ", (i+1));
    scanf("%d", &num1[i]); }

    printf("[");
    for(int i = 0; i < n1; i++) {
        printf("%d, ", num1[i]);}
    printf("]");

    printf("\ncombien de chiffres vas-tu saisir pour le deuxieme tableu: ");
    scanf("%d", &n2);

    int num2[n2];

    for (int i =0; i<n2;i++){
    printf("\nEntrez une chiffre %d : ", (i+1));
    scanf("%d", &num2[i]); }
    
    printf("[");
    for(int i = 0; i < n2; i++) {
        printf("%d, ", num2[i]);}
    printf("]");


    n3 = n1+n2;
    
    int num3[n3];

    for(int i = 0; i < n1; i++)
       num3[i] = num1[i];
    for(int i = 0; i < n2; i++)     
        num3[i + n1] = num2[i];

    printf("\nles elements de ces deux tableaux sont: \n");

    printf("[");
    for(int i = 0; i < n3; i++) {
        printf("%d, ", num3[i]);}
    printf("]");

    return 0;
}
