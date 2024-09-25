#include <stdio.h>

int main() {
    int number;

    printf("\nEntrez un nombre: ");
    scanf("%d", &number);

    printf("\nTable de multiplication de %d : ", number);
    for (int i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", number, i, number * i);
    }
    return 0;
}
