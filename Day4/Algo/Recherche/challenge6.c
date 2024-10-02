#include <stdio.h>

int dub(int tab[], int size){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size ; j++)
        {
            if (tab[i] == tab[j]){
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int tab[] = {1,19,4,1,3,7,23,15,14,2,27};
    int size = sizeof(tab)/sizeof(tab[0]);

    int result = dub(tab, size-1);
    if(result){printf("le doublons existe");}
    else if(!result){printf("le doublons pas existe");}

    return 0;
}