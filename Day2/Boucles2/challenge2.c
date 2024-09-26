#include <stdio.h>

int main(){
    int space,row,i,k = 0;

    printf("entrez le nombre de lignes: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++, k=0){
        for (space = 1; space <= row - i - 1; space++){
            printf("  ");  
        }
        while (k != 2 * i + 1){
            printf(" *");
            k++;
        }
        printf("\n");
    }

    return 0;
}