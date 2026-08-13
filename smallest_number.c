#include<stdio.h>
int main(){
    float num1,num2;
    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);
    if(num1<num2){
        printf("%f is the smallest number.",num1);
    }
    else if(num2<num1){
        printf("%f is the smallest number.",num2);
    }
    else{
        printf("Both numbers are equal.");
    }
    return 0;
}