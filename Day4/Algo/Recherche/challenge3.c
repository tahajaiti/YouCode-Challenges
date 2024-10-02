#include <stdio.h>

void minlinear(int tab[], int n){
    int min = tab[0];
    int i,idx;
    for (i = 1; i <= n; i++)
    {
        if (min > tab[i])
            min = tab[i];
            idx = i;
    }
    printf("le valeur minimum est: %d, le index: %d", min, idx);
}

int main(){
    int tab[] = {3,15,10,4,34,27,8,21,1};
    int size = sizeof(tab)/sizeof(tab[0]);
    
    int search = 21;

    minlinear(tab, size-1);

    return 0;
}