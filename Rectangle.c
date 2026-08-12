#include<stdio.h>
int main() {
    //declare the variables a & b
    int a,b,perimeter;
    //print a message of entering the value of a & b
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    //calculate the perimeter of rectangle
    perimeter = 2 * (a + b);
    //print the value of perimeter
    printf("The perimeter of the rectangle is: %d", perimeter);
    return 0;
}