#include <stdio.h>
#include <string.h>


int main()
{
    int array[5]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    int sum =0;
    int avg;

     for(int i=0; i<5; i++)
    {
        sum+=array[i];
    }
    avg = sum/5;
    printf("The sum = %d, and the average = %d", sum, avg);
}