#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter a no:");
    scanf("%d",&n);
    printf("1.Buzz no\n2.Even or odd\n3.Positive or negetive");
    printf("\nEnter choice:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        {
            if (n%7==0||n%10==7)
                printf("Buzz no");
            else
                printf("Not buzz no");
            break;
        }
    case 2:
        {
            if (n%2==0)
                printf("Even");
            else
                printf("Odd");
            break; 
        }
    case 3:
        {
            if(n>0)
                printf("Positive");
            else    printf("Negetive");
            break;
        }
    }
}