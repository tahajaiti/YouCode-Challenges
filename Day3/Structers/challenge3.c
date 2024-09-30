#include <stdio.h>

struct rectangle{float longe;float large;};

void calcul(float longe, float large){
    printf("\nLaire de rectangle est: %f", longe*large);
}

int main(){
    struct rectangle s1;

    printf("\nenter longueur:");
    scanf("%f", &s1.longe);
    printf("\nenter largeur:");
    scanf("%f", &s1.large);

    calcul(s1.longe, s1.large);

    return 0;
}