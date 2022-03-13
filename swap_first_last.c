#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int l_digit = num % 10;
    int f_digit;
    int ln = 0;
    int rev = 0;
    int rem, s = 0, i = 1;
    
    // Using While Loop
    /*while(num > 0){
        f_digit = num % 10;
        rev = rev * 10 + f_digit;
        num /= 10;
        ln++;
    }
    //int s = 0, rem, i = 1;
    while(rev > 0){
        if(i == 1){
            s = s * 10 + l_digit; 
            rev /= 10;
        }
        else if(i == ln){
            s = s * 10 + f_digit;
            rev /= 10;
        }
        else{
            rem = rev % 10;
            s = s * 10 + rem;
            rev /= 10;
        }
        i++;
    }*/

    // Using Do-While
    do{
        f_digit = num % 10;
        rev = rev * 10 + f_digit;
        num /= 10;
        ln++;
    }while(num > 0);

    do{
        if(i == 1){
            s = s * 10 + l_digit;
            rev /= 10;
        }
        else if(i == ln){
            s = s * 10 + f_digit;
            rev /= 10;
        }
        else{
            rem = rev % 10;
            s = s * 10 + rem;
            rev /= 10;
        }
        i++;
    }while(rev > 0);

    printf("\nSwapped_Output : %d", s);
}