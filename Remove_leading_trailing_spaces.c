#include <stdio.h>

void main() {
    char arr[1000];
    scanf("%[^\n]%*c", arr);

    int i, flag = 0, ind = 0;
    for(i = 0; arr[i]; i++){
        if(arr[i+1] == '\0') {
            ind = i;
        }
    }
    
   
    for(int j = ind; j > 0; j--) {
        if(arr[j] == ' '  || arr[j] == 9)
        ind--;
        else
        break;
    }
    char arr1[i];
    int z = 0;
    for(int j = 0; j <= ind; j++) {
        if((arr[j] == ' ' || arr[j] == 9) && flag == 0) 
        continue;

        else
        flag = 1;
        arr1[z] = arr[j];
        z++;
    }
    arr1[z] = '\0';

    printf("%s", arr1);
}