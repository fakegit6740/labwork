#include <stdio.h>

void main(){
    int num;
    scanf("%d", &num);
    int s = 0;
    while(num > 0){
        int counter = 0;
        int temp = num;
        int dig_c1 = num % 10;
        int n = s;
        int flag = 0;
        while(temp > 0){
            int dig_c = temp % 10;
            while(n > 0){
                int rem_n = n % 10;
                if(dig_c == rem_n){
                    flag = 1;
                    break;
                }
                n /= 10;
            }
            if(flag == 1){
                break;
            }
            else{
                if(dig_c1 == dig_c){
                counter++;
            }
            }
            temp /= 10;
        }
        if(flag == 0){
        printf("%d : %d\n", dig_c1, counter);}
        num /= 10;
        s = s * 10 + dig_c1;
    }    

}