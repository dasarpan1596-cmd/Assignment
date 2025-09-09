#include<stdio.h>
int main()
{
    float c,f,C,F;
    printf("Enter temperature(°c):");
    scanf("%f",&c);
    F=(c*9/5)+32;
    printf("\nTemperature in °F:%f",F);

    printf("\nEnter temperature(°F):");
    scanf("%f",&f);
    C=5*(f-32)/9;
    printf("Temperature in °C:%f",C);
    
}