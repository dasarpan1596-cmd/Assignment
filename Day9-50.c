//Find max and min from an array
#include<stdio.h>
#define size(x) sizeof(x)/sizeof(x[0])
int main()
{
    int ar[]={7,5,9,12,6,3,8};
    int max=ar[0],min=ar[0],i;
    for(i=1;i<size(ar);i++)
    {
        if(ar[i]<min)
            min=ar[i];
        if(ar[i]>max)
            max=ar[i];
    }
    printf("\nMAximum %d \nMinimum %d",max,min);
}