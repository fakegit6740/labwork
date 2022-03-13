#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;

    // Using While
    /*while(n--){
        printf("%d\n", i);
        i++;
    }*/

    // Using Do While
    n--;
    do{
        printf("%d\n",i);
        i++;
    }while(n--);
    
    return 0;
}