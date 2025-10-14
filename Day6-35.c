#include<stdio.h>
int main()
{
    int lr,hr,i,f=0,j;
    printf("Enter lower rangr:");
    scanf("%d",&lr);
    printf("Enter higher range:");
    scanf("%d",&hr);
    for(i=lr;i<=hr;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                {
                    f=1;
                    break;
                }
        }
        if(f==0)
            printf("\n%d",i);
        f=0;
    }
}