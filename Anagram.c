#include <stdio.h>

int are_Anagram(char arr[], char arr1[]) {
    int count_arr[256] = {0};
    int i;
    for(i = 0; arr[i] && arr1[i]; i++) {
        count_arr[arr[i]]++;
        count_arr[arr1[i]]--;
    }
    /*  for(int j = 0; j < 256; j++) {                  <--------
        if(count_arr[j])                                        |---> This Block for self Understanding
            printf("%d : %d ", j, count_arr[j]);        <--------
    }  */
    if(arr[i] || arr1[i]) {
        return 0;
    }

    for(int j = 0; j < 256; j++) {
        if(count_arr[i]) {
            return 0;
        }
    }
    return 1;
}

void main() {
    char arr[1000], arr1[1000];
    
    printf("Enter First String:- ");
    scanf("%[^\n]%*c", arr);

    printf("Enter Second String:- ");
    scanf("%[^\n]%*c", arr1);

    if(are_Anagram(arr,arr1)) 
        printf("Strings Are Anagram of each other ");
    else    
        printf("Strings are not anagram of each other ");
}