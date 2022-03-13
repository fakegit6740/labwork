#include <stdio.h>

int main(){
    
    int i = 97;
    // Using While
    /*while(i <= 122){
        printf("%c\n", i);
        i++;
    }*/

    do{
        printf("%c\n", i);
        i++;
    }while(i <= 122);
    return 0;
}