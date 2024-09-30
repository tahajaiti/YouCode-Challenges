#include <stdio.h>

void select(int tab[], int size){
    for (int i = 0; i < size-1; i++){
        int imin = i;

        for (int j = i + 1; j < size; j++){
            if (tab[j] < tab[imin]){
                imin = j;
            }
        }
        
        if(imin != i){
            int temp = tab[i];
            tab[i] = tab[imin];
            tab[imin] = temp;

        }
    }
}

int main(){
    int tab[] = {4,5,9,-1,34,23,7};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("\nle tableu: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    select(tab,size);

    printf("\nle tableu sorted: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    return 0;
}