#include <stdio.h>

void insertion(int tab[],int size){
    for (int i = 1; i < size; i ++){ //knbdaw mn tani value lihowa 1 flcode
        int temp = tab[i]; //kn7toh bach ndiro compare mn b3d
        int j = i-1; //variable dyal awl value likngolo rah deja m9ad


        //compare limen m3a lisr
        //bnsba awl loop kncompariw 
        //lakan limen kbr mn lisr frah limen kidoz liser
        while (j >= 0 && temp < tab[j]){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = temp;}
}

int main(){
    int tab[] = {1,5,-4,3,34,23,7};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("\nle tableu: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    insertion(tab,size);

    printf("\nle tableu sorted: ");
    for (int i = 0; i < size; i++){
        printf("%d, ", tab[i]);}

    return 0;
}