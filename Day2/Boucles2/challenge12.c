#include <stdio.h>

void sort(int num[], int n){
    int i,j;

    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; i++){
            if (num[j] > num[j+1]){   
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

}

int main() {
    int n;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =0; i<n;i++){
    printf("Entrez une chiffre %d : ", (i+1));
    scanf("%d", &num[i]); }

    

    return 0;
}
