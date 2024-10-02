#include <stdio.h>

void maxlinear(int tab[], int n){
    int max = tab[0];
    int idx = 0;
    for (int i = 1; i < n; i++){
        if (tab[i] > max) {
            max = tab[i];
            idx = i;
        }
    }
    printf("La valeur maximale est: %d, le index: %d\n", max, idx);
}

int main(){
    int tab[] = {3,15,10,4,34,27,8,21,1};
    int size = sizeof(tab)/sizeof(tab[0]);
    
    int search = 21;

    maxlinear(tab, size-1);

    return 0;
}