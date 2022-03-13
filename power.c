#include <stdio.h>

void main(){
    int num, power;
    printf("Enter Number: ");
    scanf("%d" ,&num);
    printf("Enter Power: ");
    scanf("%d", &power);
    int temp = 1;

    // Using While Loop
    /*while(power--){
        temp *= num;
    }*/

    // Using Do While Loop
    power--;
    do{
        temp *= num;
    }while(power--);
    
    printf("%d", temp);
}