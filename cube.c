#include<stdio.h>
int main(){
    //declare the variables of side & volume of cube
    int s,volume;
    //print a message of entering the value of side
    printf("Enter the value of side:");
    scanf("%d",&s);
    //calculate the volume of cube
    volume = s * s * s;
    //print the value of volume of cube
    printf("The volume of the cube is: %d",volume);
return 0;
}