#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area,perimeter;
    printf("Enter three side:");
    scanf("%f%f%f",&a,&b,&c);
    perimeter=a+b+c;
    s=perimeter/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    if(area==perimeter)
        printf("Equal triangle");
    else    
        printf("Not a eual triangle");
}