#include <stdio.h>
#include <stdlib.h>

int findLargest(int arr[], int n);

int main()
{
    int arr[10]={1,562,88,42,101,32,51,20,50};
    printf("The max of the array = %d", findLargest(arr,10));

}
int findLargest(int arr[], int n)
{
    int maxval = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]> maxval)
        {
            maxval=arr[i];
        }
    }
    return maxval;

}