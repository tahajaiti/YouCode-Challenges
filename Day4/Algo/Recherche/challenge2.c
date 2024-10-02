#include <stdio.h>

int binary(int tab[], int low, int high, int val){
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (tab[mid] == val)
            return mid;
        if (tab[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(){
    int tab[] = {1,4,6,7,11,14,17,25,36};
    int size = sizeof(tab)/sizeof(tab[0]);
    
    int search = 7;
    int result = binary(tab, 0, size-1, search);
    if (result){printf("\nelement existe, index = %d", result);}
    else {printf("\nExiste pas");}

    return 0;
}