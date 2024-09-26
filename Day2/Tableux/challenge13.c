#include <stdio.h>

int main() {
    int n;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    printf("les element paires est: ");

    printf("[");

    for(int i = 0; i < n; i++) {
        if (num[i] % 2 == 0){
            printf("%d, ", num[i]);}
        }
        
    printf("]");

    return 0;
}
