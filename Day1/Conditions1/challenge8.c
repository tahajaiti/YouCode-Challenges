#include <stdio.h>

int main(){

    int note;

    printf("\nentrez la note :");
    scanf("%d", &note);

    if (note < 10)
    {
        printf("\nil est recale");
    }
    else if (note >= 10 && note < 12 )
    {
        printf("\nmention passable");
    }
    else if (note >= 12 && note < 14 )
    {
        printf("\nmention assez bien");
    }
    else if (note >= 14 && note < 16 )
    {
        printf("\nmention bien");
    }
    else if (note >= 16 && note <= 20 )
    {
        printf("\nmention tres bien");
    }
    else
        printf("\nentrez une notte valide");
    return 0;
}