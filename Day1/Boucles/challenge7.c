#include <stdio.h>

int main() {
    int num, reverse = 0, remain;

    printf("Entrez un nombre: ");
    scanf("%d", &num);

    while(num != 0) {
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num /= 10;
    }

    printf("nombre inverse = %d", reverse);
    return 0;
}