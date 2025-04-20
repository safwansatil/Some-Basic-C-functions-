#include <stdio.h>
#include <ctype.h>
int isPalindrome(char *str);
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    if (isPalindrome(str))
    {
        printf("String is palindrome.");
    }
    else
    {
        printf("String is not palindrome.");
    }
    return 0;
}
int isPalindrome(char *str)
{
    char *p = str, *q = str;
    while (*q != '\0')
    {
        if (isalpha(*str))
        {
            *str = toupper(*str);
        }
        q++;
    }
    q--;
    while (p < q)
    {
        if (*p != *q)
        {
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}