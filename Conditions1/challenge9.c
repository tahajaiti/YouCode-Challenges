#include <stdio.h>

int main(){

    char input;

    printf("\nentrez une caractere : ");
    scanf(" %c", &input);

    int asci = input;

    if (asci >= 65 && asci >=90)
    {
        printf("\n%c appartient à l'alphabet et est un majuscule", input);
    }
    else if (asci >= 97 && asci >=122)
    {
        printf("\n%c appartient à l'alphabet et est un miniscule", input);
    }
    else
        printf("\n%c n'appartient pas à l'alphabet", input);

    return 0;
}