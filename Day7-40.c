#include<stdio.h>
int main()
{
    float w,c;
    printf("Enter weight: ");
    scanf("%f",&w);
    if(w<=10)
        c=w*30;
    else if(w<=30)
        c=(10*30)+(w-10)*20;
    else 
        c=(10*30)+(20*20)+(w-30)*15;
    printf("Charge = Rs.%.2f",c);
}