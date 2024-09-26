#include <stdio.h>

int main(){

    int i, n;

    int f0 = 0, f1 = 1;

    long long next = f0 + f1;

    printf("\nentrez le nombre de la Suite de Fibonacci :");
    scanf("%d", &n);

    printf("\nla Suite de Fibonacci est : %d, %d, ", f0, f1);

    for ( i = 3; i <= n; i++)
    {
        printf("%d, ", next);
        f0 = f1;
        f1 = next;
        next = f0 + f1;
    }
    
    return 0;
}