#include <stdio.h>
#include <stdlib.h>


void fuse(int tab[],int left, int mid, int right){
    int i,j,k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftab[n1], rightab[n2];

    for (i = 0; i < n1; i++)
        leftab[i] = tab[left + i];
    for (j = 0; j < n2; j++)
        rightab[j] = tab[mid + 1 + j];

    i = 0; j = 0; k = left;

    while (i < n1 && j < n2) {
        if (leftab[i] <= rightab[j]) {
            tab[k] = leftab[i];
            i++;
        }
        else {
            tab[k] = rightab[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tab[k] = leftab[i];
        i++;
        k++;}

    while (j < n2) {
        tab[k] = rightab[j];
        j++;
        k++;}
}

void fsort(int tab[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        fsort(tab, left, mid);
        fsort(tab, mid + 1, right);

        fuse(tab, left, mid, right);
    }
}

int main(){
    int tab[] = {3,5,32,12,8,19,21,4,20};
    int size = sizeof(tab)/sizeof(tab[0]);

    fsort(tab, 0, size - 1);

    for(int i = 0; i < size; i++){
        printf("%d, ", tab[i]);
    }

    return 0;
}