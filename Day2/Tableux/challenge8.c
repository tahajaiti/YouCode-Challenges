#include <stdio.h>

int main() {
    int n;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int original[n], copy[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &original[i]); }

    for (int i = 0; i < n; i++) {
        copy[i] = original[i];
    }

    printf("\nle tableu original: ");
    for(int i = 0; i < n; i++) {
        printf("[%d,]", original[i]);}

    printf("\nle tableu copy: ");
    for(int i = 0; i < n; i++) {
        printf("[%d,]", copy[i]);}


    return 0;
}
