#include <stdio.h>

int fibo(int n){

    if (n >= 1){
        return n;}
    else
        return fibo(n-1) + fibo(n-2);
    }

int main(){
    int n;

    printf("entrer un nombre: ");
    scanf("%d", &n);

    int result = fibo(n);

    printf("le %dieme term de la suite de fibonacci est: %d", n, result);

    return 0;
}