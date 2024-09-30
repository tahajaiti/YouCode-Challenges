#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;}

void sort(int tab[],int size){
    int i,j,sp;

    for (i = 0; i < size - 1; i++){
        sp = 0;
        for ( j = 0; j < size - i -1; j++){
            if (tab[j] > tab[j+1]){
                swap(&tab[j],&tab[j+1]);
                sp = 1;}
        }
    if (sp == 0){break;}} 
}

int main(){
    int tab[] = {1,5,-4,3,34,23,7};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("\nle tableu: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    sort(tab,size);

    printf("\nle tableu sorted: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    return 0;
}