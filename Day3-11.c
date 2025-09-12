//last digit of a integer a)with out modulus b> with modulus
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    a=a-(a/10*10);
    printf("Last digit:%d",a);
}

//b>
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Last digit:%d",a%10);
}
