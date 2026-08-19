#include<stdio.h>
void rempove_spaces(char *str);
int main(){
    char text[256];
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        rempove_spaces(text);
        printf("Modified string: %s\n", text);
    }
    return 0;

}
void rempove_spaces(char *str){
    int i=0,j=0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}