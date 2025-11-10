// (a)find size of string
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str); 
    while (str[i] != '\0') {
        i++;
    }
    printf("Length of the string = %d\n", i);

    return 0;
}

// (b)copy of string
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i;

    
    printf("Enter a string: ");
    gets(str1); 
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
    printf("Copied string: %s\n", str2);

    return 0;
}

//(c)compare two string
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;
    printf("Enter first string: ");
    gets(str1);  
    printf("Enter second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}

//(d) concatenate or add the string
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);
    while (str1[i] != '\0') 
        i++;
    while (str2[j] != '\0') 
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; 
    printf("Concatenated string: %s\n", str1);
    return 0;
}