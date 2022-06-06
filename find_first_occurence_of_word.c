#include <stdio.h>

void main() {
    char string[10000];
    scanf("%[^\n]%*c", string);

    char word[100];
    scanf("%s", word);

    int ind;

    for(int i = 0; string[i]; i++) {
        int found = 1;
        for(int j = 0; word[j]; j++) {
            if(string[i+j] != word[j]) {
                found = 0;
                break;
            }
        }
        if(found == 1) {
            ind = i;
            break;
        }
    }
    printf("First index:- %d", ind);
}