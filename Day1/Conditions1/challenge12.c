#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Entrez le deuxieme instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxieme.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxieme instant vient avant le premier.\n");
    } else {
        printf("Il sagit du même instant.\n");
    }

    return 0;
}
