#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else    
        return gcd(b,a%b);
}
int main()
{
    int num1,num2;
    printf("Enter two no:");
    scanf("%d %d",&num1,&num2);
    printf("Gcd is %d\n",gcd(num1,num2));
}