#include <stdio.h>
#include <stdbool.h>

bool check(int num){
    if (num % 2 == 0){
        return 1;}
    else
        return 0;
}

int main(){
    int n;

    printf("\nentrer un nombre: ");
    scanf("%d", &n);

    int result = check(n);

    if (result == 0){printf("\n%d est impaire.", n);}
    if (result == 1){printf("\n%d est paire.", n);}
}