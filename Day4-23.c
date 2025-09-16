#include<stdio.h>
int main()
{
    char p;
    printf("Enter letter:");
    scanf("%c",&p);
    if(p=='a'||p=='A'||p=='e'||p=='E'||p=='i'||p=='I'||p=='o'||p=='O'||p=='u'||p=='U')
        printf("Vowel");
    else
        printf("consonent");
}