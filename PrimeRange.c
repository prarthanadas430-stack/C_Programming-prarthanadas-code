#include<stdio.h>
int main(){
    int lower,upper;
    printf("Enter lower limit of the range:");
    scanf("%d",&lower);
    printf("Enter upper limit of the range:");
    scanf("%d",&upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for(int num=lower;num<=upper;num++){
        int isPrime=1;
        if(num<=1){
            isPrime=0;
        }
        else{
            for(int i=2;i*i<=num;i++){
                if(num%i==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            printf("%d ",num);
        }
    }
    return 0;
}