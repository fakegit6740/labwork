#include <stdio.h>
int rev(int num){
    int s = 0,rem;
    do{
        rem = num % 10;
        s = s * 10 + rem;
        num /= 10;

    }while(num > 0);
    return s;
}
void count(int num){
    int s;
    num = rev(num);
    do{
        int temp = num;
        int dig_c = num % 10;
        int n = s;
        int flag = 1;
        int counter = 0;
        do{
            int dig = n % 10;
            if(dig_c == dig){
                flag = 0;
                break;
            }
            n /= 10;
        }while(n > 0);

        if(flag == 1){
            do{
                int dig_c1 = temp % 10;
                if(dig_c == dig_c1){
                    counter++;
                }
                temp /= 10;
            }while(temp > 0);
            printf("%d          %d\n", dig_c, counter);
        }
        s = s * 10 + dig_c;
        num /= 10;
    }while(num > 0);
}

void main(){
    int num;
    
    scanf("%d", &num);
    printf("Digit  Frequency\n");
    count(num);
}