#include<stdio.h>
int main()
{
    int size,x,count=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number x to find its occurance:");
    scanf("%d",&x);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", x, count);
    return 0;
}