#include<stdio.h>
int main(){
    int a,b,c,average;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("The average is: %d",average);
    return 0;
}