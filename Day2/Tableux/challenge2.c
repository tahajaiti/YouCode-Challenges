#include <stdio.h>

int main() {
    int n;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("\nEntrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    printf("[ ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", num[i]);}
    printf("]");
    return 0;
}
