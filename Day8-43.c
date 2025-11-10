/*
123
894
765*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter side:");
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int min=i<j?i:j;
            int min2=(n-i+1)<(n-j+1)?(n-i+1):(n-j+1);
            int ring=min<min2?min:min2;  //current layer no
            int start =(ring-1)*(4*(n-ring+1)-4)+1;  //starting no of this layer
            int end=n-ring+1;
            int val;
            if(i==ring)   //top row
                val=start+(j-ring);
            else if(j==end)  //right coloum
                val=start+(end-ring)+(i-ring);
            else if(i==end)
                val=start+2*(end -ring)+(end-j);
            else
                val=start+3*(end-ring)+(end-i);
            printf("%3d",val);

        }
        printf("\n");
    }
}