#include<stdio.h>
int main()
{
    int a,b;
    char ope;
    printf("Enter 1st no:");
    scanf("%d",&a);
    printf("\nEnter 2nd no:");
    scanf("%d",&b);
    printf("\nOperater:");
    scanf(" %c",&ope);

    switch (ope) {
        case '+':
            printf("Result:%d\n",a+b);
            break;
        case '-':
            printf("Result:%d\n",a-b);
            break;
        case '*':
            printf("Result:%d\n",a*b);
            break;
        case '/':
            printf("Result:%d\n",a/b);
            break;
        default:
            printf("invalide");
    }
}