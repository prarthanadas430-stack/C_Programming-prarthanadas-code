#include<stdio.h>
char highest_frequency_char(char *str) {
    int freq[256] = {0};
    int max_count=0;
    char max_char = '\0';
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max_count) {
            max_count = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }
    return max_char;
}
int main(){
    char text[256];
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        char result = highest_frequency_char(text);
        if (result != '\0') {
            printf("Character with highest frequency: %c\n", result);
        } else {
            printf("No characters found in the string.\n");
        }
    }
    return 0;
}