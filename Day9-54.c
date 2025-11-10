//palindrome of a string
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[30];
    int i,len,f=0;
    printf("Enter astring:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
}
