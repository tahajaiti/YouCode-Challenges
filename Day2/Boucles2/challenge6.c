#include <stdio.h>


int main(){
    int n;

    printf("\nentrez le nombre: ");
    scanf("%d", &n);

    printf("les factuers de %d est: ", n);

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d, ",i);}
    }

    return 0;
}