#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int n){
    if (n == 0 || n == 1){return 0;}

    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){return 0;}
    }
    return 1;
}

int main(){
    int n,temp;

    printf("\nentrez un nombre: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        if (prime(i)){
            printf("%d, ", i);}
    }
    return 0;
}