#include <stdio.h>

int linear(int tab[], int n, int val){
    for (int i = 0; i < n; i++){
        if (tab[i] == val){return 1;}
    }
    return 0;
}

int main(){
    int tab[] = {3,15,10,4,34,27,8,21,1};
    int size = sizeof(tab)/sizeof(tab[0]);
    
    int search = 21;

    int result = linear(tab, size, search);
    if (result){printf("\n%d existe", search);}
    else {printf("\n%d Existe pas", search);}

    return 0;
}