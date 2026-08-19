#include<stdio.h>
#include <string.h>
void convertVowelsToUppercase(char *str);
int main(){
char text[256];
printf("Enter a string: ");
if (fgets(text, sizeof(text), stdin) != NULL) {
    convertVowelsToUppercase(text);
    printf("Modified string: %s\n", text);
}
return 0;
}
void convertVowelsToUppercase(char *str){
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = toupper(str[i]);
        }
    }
}
