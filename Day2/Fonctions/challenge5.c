#include <stdio.h>


int factor(int a){
    int fact = 1;

    for (int i = 1; i <= a; i++){
        fact *= i;}
    return fact;
}


int main(){

    int a;

    printf("entrer un nombre: ");
    scanf("%d", &a);

    int fact = factor(a);

    printf("le factorielle de %d est: %d", a, fact);

    return 0;
}