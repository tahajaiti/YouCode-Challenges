#include <stdio.h>

int main() {
    int n,moyenne;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    for(int i = 0; i < n; i++) {
        moyenne += num[i];}
    moyenne = moyenne/n;

    printf("le moyenne est: %d", moyenne);

    return 0;
}
