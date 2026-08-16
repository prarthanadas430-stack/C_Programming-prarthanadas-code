#include <stdio.h>
#include <math.h>

double findSquareRoot(double n);
int main() {
    double num;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    printf("Square root: %.2f\n", findSquareRoot(num));
    return 0;
}
double findSquareRoot(double n) {
    if (n < 0) {
        printf("Error: Cannot compute square root of a negative number.\n");
        return -1; // Return -1 to indicate an error
    }
    return sqrt(n);
}
