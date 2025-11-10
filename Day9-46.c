#include<stdio.h>//sum of first ten even natural no using function
int sumeven(int n)
{
    int i,s=0;
    for(i=1;i<=n*2;i++)
    {
        if(i%2==0)
            s=s+i;
    }
    return s;
}
int main()
{
    int v=10;
    printf("Sum of first 10 even natural no=%d",sumeven(v));
}