#include <stdio.h>
#include <string.h>

struct info{ char num[25]; char prenom[25];int age;};

int main(){
    int age;
    char name[50], prenom[50];

    printf("enter your age: \n");
    scanf("%d", &age);
    printf("enter your nom: \n");
    scanf("%s", &name);
    printf("enter your prenom: \n");
    scanf("%s", &prenom);

    struct info s1;

    strcpy(s1.num, name);
    strcpy(s1.prenom, prenom);
    s1.age = age;

    printf("%d, %s,  %s\n", s1.age, s1.num, s1.prenom);

    return 0;
}