#include<stdio.h>//check roll 100 present or not
int main()
{
    int r;
    printf("Enter roll:");
    scanf("%d",&r);
    if(r=100)
        printf("present");
    else
        printf("absent");
}