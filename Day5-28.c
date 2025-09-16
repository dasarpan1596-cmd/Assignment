#include<stdio.h> //final salary
int main()
{
    int bs,fs;
    printf("Enter salary:");
    scanf("%d",&bs);
    {
    if(bs>=50000)
        fs=bs+((35*bs)/100);
    else if(bs>=30000)
        fs=bs+((30*bs)/100);
    else
        fs=bs+((15*bs)/100);
    }
    printf("\nFinal salary:%d",fs);

}