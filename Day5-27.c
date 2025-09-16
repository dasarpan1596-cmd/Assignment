#include<stdio.h>//check vowel or consonent with switch case
int main()
{
    char a;
    printf("Enter letter:");
    scanf(" %c",&a);
    if (isalpha(a)) // isalpha(a) used to check input letter or not
    {
    switch (a) {
        case 'A' :     
        case 'a' :
        case 'E' :
        case 'e' :
        case 'I' :
        case 'i' :
        case 'O' :
        case 'o' :
        case 'U' :
        case 'u' :
            printf("Vowel");
            break;
        default :
            printf("consonent");
        }
    }
    else 
        printf("%cis not a letter.",a);
}