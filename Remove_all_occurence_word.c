#include <stdio.h>
#include <string.h>

void main() {
    int i,j;
    char str[1000], to_remove[100];

    printf("Enter String:- ");
    scanf("%[^\n]%*c", str);

    printf("Enter word to remove:- ");
    scanf("%s", to_remove);
    int z = 0;
    char temp[100];
    char new_arr[1000];
    for(i = 0; str[i]; i++) {
        int found = 1;
        if(str[i] != ' ') {
            temp[i] = str[i];
        }

        else{
            temp[i] = '\0';
            if(strlen(to_remove) == strlen(temp)){
                for(j = 0; temp[j]; j++) {
                    if(temp[j] != to_remove[j]) {
                        found = 0;
                        break;
                    }
                }
            }
        }
        
        if(found != 1) {
            for(int k = z; temp[k]; k++) {
                new_arr[k] = temp[k];
                z++;
            }
        }
        temp[0] = '\0';
    }
    new_arr[z] = '\0';
    printf("%s", new_arr);
} 