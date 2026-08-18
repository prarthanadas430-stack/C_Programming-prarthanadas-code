#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int new_element;
    printf("enter the element to insert at the end:");
    scanf("%d",&new_element);
    arr[n]=new_element;
    n++;
    printf("Array after insertion: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}