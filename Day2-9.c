#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);
    c=a,a=b,b=c;
    printf("After swaping\n1st no:%d\n2nd no:%d",a,b);
}