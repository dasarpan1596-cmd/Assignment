//transpose of a matrix
#include<stdio.h>
int main()
{
    int r,c;
    printf("\nEnter row and coloumn no:");
    scanf("%d %d",&r,&c);
    int ar[r][c];
    printf("Enter data: ");
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\n---Normal matrix---\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",ar[i][j]);
        printf("\n");
    }
    printf("\n---Transpose matrix---\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            printf("%d ",ar[j][i]);
        printf("\n");
    }
}