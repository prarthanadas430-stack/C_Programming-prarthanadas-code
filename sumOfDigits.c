#include<stdio.h>
int sumOfDigits(int n);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}
int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10; // add the last digit to sum
        n /= 10; // remove the last digit
    }
    return sum;
}