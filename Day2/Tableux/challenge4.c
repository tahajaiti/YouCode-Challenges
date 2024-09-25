#include <stdio.h>

int main() {
    int n, max;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    max = num[0];
    for(int i = 1; i < n; i++) {
        if(num[i] > max) {
            max = num[i];}}

    printf("le plus grand element est: %d", max);

    return 0;
}
