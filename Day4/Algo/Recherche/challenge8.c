#include <stdio.h>
#include <string.h>

void find(char *texte, char *mot) {
    char *position = strstr(texte, mot);
    if (position != NULL) {
        printf("la position de la premiere occurrence %d.\n", position - texte);
    } else {
        printf("le mot nest pas trouve");
    }
}

int main() {
    char text[265] = "Hello World, Today Is Kinda Sunny.";
    char word[64] = "Kinda";

    find(text, word);

    return 0;
}
