#include <stdio.h>

int main() {
    int num, count = 0, n = 1;

    printf("\nEntrez un nombre: ");
    scanf("%d", &num);

    printf("Les %d premiers nombres impairs sont: ", n);

    while (count < num)
    {
        printf("%d ,", n);
        n += 2;
        count ++;
    }
    return 0;
}