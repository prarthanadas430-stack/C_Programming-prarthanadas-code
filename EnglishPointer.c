#include <stdio.h>
int main(){
    char ch='A';
    char *ptr=&ch;
    printf("English Alphabet:\n");
    for(int i=0; i<26; i++){
        printf("%c ", *ptr);
        (*ptr)++;
    }
    printf("\n");
    return 0;
}