#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
    return (*(int*)a- *(int*)b);
}


int main(){
    int tab[] = {2,5,8,23,4,13,19,1,34};
    int size = sizeof(tab)/sizeof(tab[0]);

    qsort(tab, size, sizeof(int), compare);

    for(int i= 0; i < size; i++){
        printf("%d, ", tab[i]);
    }
    return 0;
}