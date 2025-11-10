#include<stdio.h>//febonaci series
int n1=0,n2=1,n3;
void fibo(int n)
{
    if(n>2)
    {
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
        fibo(n-1);
        
    }
}
int main()
{
    int limit;
    printf("Enter limit:");
    scanf("%d",&limit);
    printf("%d %d",n1,n2);
    fibo(limit);
}