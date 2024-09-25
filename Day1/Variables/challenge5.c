#include <stdio.h>

int main() {

    double celsius;

    printf("\nEntrez la temperature en celsius: ");
    scanf("%lf", &celsius);

    if (celsius >= 100) {
        printf("\nl'état de l'eau à cette température %.2lf est: Gaz", celsius);
    } else if (celsius >= 0) {
        printf("\nl'état de l'eau à cette température %.2lf est: Liquide", celsius);
    } else {
        printf("\nl'état de l'eau à cette température %.2lf est: Solide", celsius);
    }

    return 0;
}
