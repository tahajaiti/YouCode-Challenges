#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double delta,root1,root2;

    printf("\nEntrez les nombres a, b et c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0){
        if (b == 0){
            printf("\nequation pas valide");
        }
        else{
            root1 = -c / b;
            printf("\nsolution est : x = %.2lf\n", root1);
        }  
    }
    else {
        delta = pow(b, 2) - 4 * a * c;

        if (delta == 0){
            root1 = -b / (2 * a);
            printf("\nequation admet une seul solution : x = %.2lf\n", root1);
        }
        else if (delta > 0){
            root1 = (-b + sqrt(delta)) / (2 * a);
            root2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nequation admet deux solution :");
            printf("\n x1 = %.2lf", root1);
            printf("\n x2 = %.2lf", root2);
        }
        else{
        printf("\nequation pas reel");
		}
	}	

    return 0;
}