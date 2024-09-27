#include <stdio.h>

int main() {
    int n,temp;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("\nEntrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; i++){
            if (num[j] > num[j+1]){   
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d, ", num[i]);}    
    printf("]");

    return 0;
}
