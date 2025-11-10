//wheather a person is elegible to vote or not
#include<stdio.h>
int main()
{
    int age,ch;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
        ch=1;
    else 
        ch=0;
    switch (ch)
    {
        case 1:
            printf("You are elegible to vote");
            break;
        case 0:
            printf("You are not elegible to vote");
    }
}