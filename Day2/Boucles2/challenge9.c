#include <stdio.h>

int searching(int tab[], int low, int high, int x){

    while (low <= high){
        int mid = low + (high - low)/2;

        if (tab[mid] == x){return mid;}
        if (tab[mid] < x){low = mid + 1;}
        else{high = mid - 1;}
    }
    return -1;
}

int main() {
    int n,x;

    printf("\ncombien de chiffres vas-tu saisir: ");
    scanf("%d", &n);

    int num[n];

    for (int i =1; i<=n;i++){
    printf("Entrez une chiffre %d : ", (i));
    scanf("%d", &num[i]); }

    printf("\nquel element vous souhaitez rechercher: ");
    scanf("%d", &x);
    
    int search = searching(num,0,n,x);
    if (search == -1){
        printf("\ncet element nexiste pas: ");}
    else
        printf("cet element exist dans le tableau");

    return 0;
}
