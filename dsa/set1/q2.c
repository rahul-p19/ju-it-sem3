/* Write a program to reverse a list of integers */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,temp;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    int* arr = (int*)calloc(n,sizeof(int));
    printf("Enter the elements of the list: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<n/2;i++){
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array: ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}