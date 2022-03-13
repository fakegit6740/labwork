#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 0;
    
    //While
    /*while(i < n){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }*/

    //Using Do-While
    do{
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }while(i < n);
    return 0;
}