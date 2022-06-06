#include <stdio.h>

int is_panagram(char arr[]) {
    char arr1[123] = {0};
    int i;
    for(i = 0; arr[i]; i++) {
        arr1[arr[i]]++;
    }
    for(int k = 97; k < 123; k++) {
        if(!arr1[k])
        if(!arr1[k-32])
        return 0;
    }
    return 1;
}

void main() {
    char arr[10000];
    printf("Enter String:- ");
    scanf("%[^\n]%*c", arr);
    if(is_panagram(arr)) {
        printf("String is panagram!");
    }
    else {
        printf("String is not panagram!");
    }
}