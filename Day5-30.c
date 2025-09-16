#include<stdio.h> //Grade
int main()
{
    int a;
    printf("Total (%%) : ");
    scanf("%d",&a);
    if (a<=100)
    {
    if (a>=90 && a<=100)
        printf("Gread O");
    else if (a>=80)
        printf("Gread A+");
    else if (a>=70)
        printf("Grade A");
    else if(a>=60)
        printf("Gread B+");
    else if(a>=50)
        printf("Gread B");
    else if(a>=40)
        printf("Gread C");
    else
        printf("F");
    }
    else 
        printf("Invalid input");
}