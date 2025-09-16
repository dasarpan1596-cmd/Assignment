#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);
    if(a>b)
        printf("Greater is %d",a);
    else
        printf("Greater is %d",b);
}