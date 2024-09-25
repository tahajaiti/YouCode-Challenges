#include <stdio.h>

void tobinary (int num){
     if (num == 0) {
        printf("\nle nombre en binary est : 0");
        return;
    }

    int binaryNum[32];
    int i=0;
   
    for (;num > 0;)
    {
      binaryNum[i++] = num % 2;
      num /= 2;
    }

    for (int j = i - 1; j >= 0; j--){
        printf("%d",binaryNum[j]); 
    }    
}

int main(){

    int num;

    printf("\nentrez un nombre: ");
    scanf("%d", &num);

    printf("\n%d en binaire est: ", num);
    tobinary(num);

    printf("\n%d en hexadecimal est: %X", num);

    return 0;
}