#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("Enter 2nd no:");
    scanf("%d",&b);
    printf("Enter 3rd no:");
    scanf("%d",&c);

    printf("Greatest is %d",a>b?(a>c?a:c):(b>c?b:c));
}