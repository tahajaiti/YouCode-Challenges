#include <stdio.h>

void swap(int *a, int *b){
    int temp = a;
    a = b;
    b = temp;
}



int main(){
    int tab[] = {1,5,-4,3,34,23,7};
    int size = sizeof(tab) / sizeof(tab[0]);




    return 0;
}