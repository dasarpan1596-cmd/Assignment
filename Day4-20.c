#include<stdio.h>  //a no is whole or not
int main()
{
    float a;
    int b;
    printf("Enter no:");
    scanf("%f",&a);
    b=a; //whole no is a positive integer no
    if(a>=0 && a==b)
        printf("Whole no");
    else 
        printf("Not whole no");
}