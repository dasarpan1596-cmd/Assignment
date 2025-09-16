#include<stdio.h> //electric bill <=100-rs 5,100-200-rs7,>200-10
int main()
{
    int u,c;
    printf("Total unit:");
    scanf("%d",&u);
    if (u<=100)
        c=u*5;
    else if (u<=200)
        c=(100*5)+(u-100)*7;
    else
        c=100*5+100*7+(u-200)*10;
    printf("Total cost:Rs %d",c);

}