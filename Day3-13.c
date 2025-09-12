#include<stdio.h>   //area andperemeter of a rectengle
int main()
{
    int l,w;
    printf("length(cm):");
    scanf("%d",&l);
    printf("width(cm):");
    scanf("%d",&w);
    printf("\nArea of rectengle:%d",l*w);
    printf("\nPeremeter of rectengle:%d",2*(l+w));
}