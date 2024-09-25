#include <stdio.h>

int main(){

    int i, n;

    int t1 = 0, t2 = 1;

    int next = t1 + t2;

    printf("\nentrez le nombre de la Suite de Fibonacci :");
    scanf("%d", &n);

    printf("\nla Suite de Fibonacci est : %d, %d, ", t1, t2);

    for ( i = 3; i <= n; i++)
    {
        printf("%d, ", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    
    return 0;
}