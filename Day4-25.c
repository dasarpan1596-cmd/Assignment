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
    if(a>b&&a>c)
        printf("Greatest is  %d",a);
    else if(b>a&&b>c)
        printf("Greatest is %d",b);
    else
        printf("Greatest is %d",c);



}