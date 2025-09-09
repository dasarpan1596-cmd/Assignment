#include<stdio.h>
int main()
{
    int p,t,r;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter time:");
    scanf("%d",&t);
    printf("Enter interest rate:");
    scanf("%d",&r);
    printf("Total interest:%d",p*t*r/100);
}