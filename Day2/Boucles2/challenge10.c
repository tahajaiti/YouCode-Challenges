#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

char passgen(int n){

    char storage[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$^&*()";
    char password[n+1];
   
    srand(time(NULL));

    for(int i = 0; i < n; i++) {
      int index = rand() % (sizeof(storage) - 1);
      password[i] = storage[index];
    }

    password[n] = '\0';

    printf("\nle mot de pass est:");
    printf("\n%s", password);
}


int main(){
    int n;

    printf("\nentrer un nombre: ");
    scanf("%d", &n);

    passgen(n);

    return 0;
}