//find out compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    double a,p,r,n,t;
    printf("Initial amount:");
    scanf("%lf",&p);
    printf("Interest rate:");
    scanf("%lf",&r);
    printf("Interest applied per time period:");
    scanf("%lf",&n);
    printf("Time periods:");
    scanf("%lf",&t);
    r=r/100;
    a=p*pow((1+r/n),n*t);
    printf("Amount:%lf",a);
}