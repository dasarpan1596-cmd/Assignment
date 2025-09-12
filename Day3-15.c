#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    x1=(-b/2*a)-pow((b*b)-4*a*c,0.5)/(2*a);
    x2=(-b/2*a)+pow((b*b)-4*a*c,0.5)/(2*a);
    printf("Root of quadratic equation are x1=%.2f and x2=%.2f",x1,x2);
}