#include <stdio.h>

int main(){

    int n;

    printf("\nentrez un nombre: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("\n%d x %d = %d", n, i, n*i);
    }

    return 0;
}