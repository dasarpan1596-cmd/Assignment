//palindromic
#include<stdio.h>
int main()
{
    int n,i,r=0;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10)
        r=r*10+i%10;
    printf("Reverse :%d",r);
    if(r==n)
        printf("\nPalindromic no");
    else    
        printf("\nNot palindromic");
}