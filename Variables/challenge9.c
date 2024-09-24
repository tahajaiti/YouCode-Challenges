#include <stdio.h>
#include <math.h>

double calculdistance (double x1, double x2, double y1, double y2, double z1, double z2){
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));

    return distance;
}

int main(){

    double x1,x2,y1,y2,z1,z2;

    printf("\nEntrez le premier point 3D [X1, Y1, Z3]: ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);
    printf("\nEntrez le deuxieme point 3D [X2, Y2, Z2]: ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    double distance = calculdistance(x1,x2,y1,y2,z1,z2);

    printf("\nla distance entre deux points dans un espace 3D est : %.2lf", distance);

    return 0;
}