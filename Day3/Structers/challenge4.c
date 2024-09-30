#include <stdio.h>

struct Point {double x;double y;};

int main() {
    double a,b;

    printf("enter le valeur de x: \n");
    scanf("%lf", &a);
    printf("enter le valeur de y: \n");
    scanf("%lf", &b);

    struct Point point;
    
    struct Point *pointer = &point;
    
    pointer->x = a;
    pointer->y = b;

    printf("Les coordonnees du point est: x = %.2lf, y = %.2lf\n", pointer->x, pointer->y);
    
    return 0;
}
