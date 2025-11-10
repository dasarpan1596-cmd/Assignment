#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("\nAll no are equal");
    else
    {
        if(a>b&&a>c)
            printf("\n%dis the greatest no: ",a);
        else if (b>a&&b>c)
            printf("\n%dis the greatest no: ",b);
        else
            printf("\n%dis the greatest no: ",c); 
    }
    if(a>0&&b>0&&c>0)
        printf("\nAll no are positive.");
    else if(a<0 && b<0 && c<0)
        printf("\nAll no are negetive.");
    else
        printf("\nMixd no.");
}