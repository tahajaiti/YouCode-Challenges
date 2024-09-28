#include <stdio.h>
#include <string.h>

void reverse(char* text){ 
    
    int first = 0;
    int last = strlen(text)-1;
    char temp;

    while (first < last){
        temp = text[first];
        text[first] = text [last];
        text[last] = temp;

        first++;
        last--;
    }
}

int main(){
    char text[100];

    printf("\nentrer une phrase: ");
    scanf("%s", &text);

    reverse(text);

    printf("le inverse est: %s", text);

    return 0;
}