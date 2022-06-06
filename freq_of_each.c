#include <stdio.h>

void main() {
    long long int number;
    scanf("%Ld", &number);
    int arr[10] =  {0};
    //printf("%Ld", number);
    while(number > 0) {
        int rem = number % 10;
        arr[rem]++;
        number /= 10;
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] != 0) {
            printf("%d : %d\n", i, arr[i]);
        }
    }
    
}