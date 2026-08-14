#include <stdio.h>
int main(){
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is a natural number.", num);
    }
    else{
        printf("%d is not a natural number.", num);
    }

    return 0;
}
    