#include<stdio.h>  //leap year or not
int main()
{
    int a;
    printf("Enter year:");
    scanf("%d",&a);
    if( a%400==0)
        printf("leap year");
    else if (a%100!=0 && a%4==0)
        printf("Leap year");
    else
        printf("Not leap year");
    
}
