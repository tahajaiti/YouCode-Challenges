#include <stdio.h>
#include <ctype.h>

int main(){

    char letter;

    printf("\nentrez un caractere : ");
    scanf(" %c", &letter);

    char maj = toupper(letter);

    switch (maj)
    {
    case 'A':
        printf(" %c est une voyelle\n", letter);
        break;
    case 'U':
        printf(" %c est une voyelle\n", letter);
        break;
    case 'I':
        printf(" %c est une voyelle\n", letter);
        break;
    case 'O':
        printf(" %c est une voyelle\n", letter);
        break;
    case 'E':
        printf(" %c est une voyelle\n", letter);
        break;
    case 'Y':
        printf(" %c est une voyelle\n", letter);
        break;
    default:
        printf(" %c nest pas une voyelle\n", letter);
        break;
    }

    return 0;
}
