#include <stdio.h>
#include <string.h>

#define MAX 6

struct info{ char num[25]; char prenom[25];int notes[MAX];};

int main(){
    struct info s1;
    char name[25], prenom[25];

    printf("\nenter your nom:");
    scanf("%s", &name);
    printf("\n enter your prenom:");
    scanf("%s", &prenom);

    for (int i = 0; i < MAX; i++){
        printf("\nenter le %d note:  ", i+1);
        scanf("%d", &s1.notes[i]);}
    

    strcpy(s1.num, name);
    strcpy(s1.prenom, prenom);

    printf("%s,  %s\n",s1.num, s1.prenom);

    for (int i = 0; i < MAX; i++){
        printf("%d, ", s1.notes[i]);}
    

    return 0;
}