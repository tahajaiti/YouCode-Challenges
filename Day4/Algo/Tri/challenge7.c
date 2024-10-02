#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare (const void* a, const void* b){
    return (*(int*)a- *(int*)b);
}

bool searchb(int tab[], int start, int fin, int var) {
    while (start <= fin) {
        int mid = start + (fin - start) / 2;

        if (tab[mid] == var)
            return true;

        if (tab[mid] < var)
            start = mid + 1;

        else
            fin = mid - 1;
    }
    return false;
}

int main(){
    int tab[] = {2,5,42,23,14,9,7,29,17};
    int size = sizeof(tab)/sizeof(tab[0]);

    qsort(tab, size, sizeof(int), compare);

    for(int i= 0; i < size; i++){
        printf("%d, ", tab[i]);
    }
    printf("\n");

    int search = 14;
    if (searchb(tab, 0, size-1, search)){
        printf("\n%d existe\n", search);}
    else {printf("element existe pas\n");}

    return 0;
}