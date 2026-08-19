#include<stdio.h>
void replace(char *str);
int main(){
    char text[256];
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        replace(text);
        printf("Modified string: %s\n", text);
    }
    return 0;
}
void replace(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
}