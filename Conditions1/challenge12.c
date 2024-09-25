#include <stdio.h>

typedef struct {int heures; int minutes; int secondes;} time;

time read(){
    time i;
    scanf("%d:%d:%d", &i.heures, &i.minutes, &i.secondes);
    return i;
}

int compare(time t1, time t2){
    if (t1.heures != t2.heures){
        return t1.heures - t2.heures;
    }
    if (t1.minutes != t2.minutes){
        return t1.minutes - t2.minutes;
    }
    return t1.secondes - t2.secondes;
}

int main(){

    printf("\nentrez le premier instant [HH:MM:SS]: ");
    time time1 = read();

    printf("\nentrez le deuxieme instant [HH:MM:SS]: ");
    time time2 = read();

    int comparaison = compare(time1, time2);

    if (comparaison < 0) {
        printf("le premier instant vient avant le deuxième\n");
    } else if (comparaison > 0) {
        printf("le deuxième instant vient avant le premier\n");
    } else {
        printf("il s'agit du même instant\n");
    }

    return 0;
}