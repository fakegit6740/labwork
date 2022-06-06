#include <stdio.h>

void main() {
    char arr[10000];
    scanf("%[^\n]%*c", arr);
    int i,j;
    for(i = 0; arr[i]; i++);
    char arr1[i];
    int z = 0;
    for(j = 0; j < i; j++) {
        
        if(arr[j] == ' ') {
            arr1[z] = arr[j+1];
            j++;
        }
        else
            arr1[z] = arr[j];
        z++;
    }
    arr1[z] = '\0';
    printf("%s",arr1);
}