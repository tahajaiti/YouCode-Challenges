#include <stdio.h>
#include <string.h>

struct info{char titre[100]; char auteur[100]; int year;};

struct info make(char *titres, char *auteurs, int years){
    struct info s1;

    strcpy(s1.titre, titres);
    strcpy(s1.auteur, auteurs);
    s1.year = years;

    return s1;}

int main(){
    int y;
    char t[25], a[25];
    
    printf("enter titre: \n");
    scanf("%s", &t);
    printf("enter auteur: \n");
    scanf("%s", &a);
    printf("enter year: \n");
    scanf("%d", &y);

    struct info s;
    s = make(t,a,y);

    printf("\nle titre est : %s", s.titre);
    printf("\nle auteur est : %s", s.auteur);
    printf("\nle anne est : %d", s.year);
    return 0;
}