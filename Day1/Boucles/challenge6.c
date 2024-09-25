#include <stdio.h>

int main() {
    int num, count = 0, n = 2;

    printf("\nEntrez un nombre: ");
    scanf("%d", &num);

    printf("Les %d premiers nombres pairs sont: ", num);

    while (count < num)
    {
        printf("%d ,", n);
        n += 2;
        count ++;
    }
    return 0;
}