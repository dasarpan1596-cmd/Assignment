//find odd and eveen no from an array
#include<stdio.h>

void disp(int x[],int s)
{
    for (int i=0;i<s;i++)
        printf("%d ",x[i]);
}
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
    int oc=0,ec=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            ec++;
        else
            oc++;
    }
    int even[ec],odd[oc],ei=0,oi=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            even[ei++]=ar[i];
        else    
            odd[oi++]=ar[i];
    }
    printf("\n---Even elements---\n");
    disp(even,ei);
    printf("\n---Odd elements---\n");
    disp(odd,oi);
}
