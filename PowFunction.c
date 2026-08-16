#include <stdio.h>
#include <math.h>

double myPow(double base, int exponent);
int main(){
    double base;
    int exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, myPow(base, exponent));
    return 0;
}
double myPow(double base,int exponent){
    double power=pow(base, exponent);
    return power;
}
