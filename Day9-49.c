#include<stdio.h>//linear search
int main()
{
    int n,i,x,f=-1;
    printf("\nEnter size:");
    scanf("%d",&n);
    int ar[n];
    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        printf(" ");
        scanf("%d",&ar[i]);
    }
    printf("Enter search data:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            f=i;
            break;
        }
    }
    if(f==-1)
        printf("Not found");
    else    
        printf("Found at %d index",f);
}
