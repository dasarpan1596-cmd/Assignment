#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);
    a=a+b,b=a-b,a=a-b;
    printf("After swaping\n1st no:%d\n2nd no:%d",a,b);
}