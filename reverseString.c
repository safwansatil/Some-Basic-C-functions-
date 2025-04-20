#include <stdio.h>
int main()
{
    char str[100], *p, *q;
    printf("Enter string: ");
    gets(str);
    for (p = str; *p != '\0'; p++)
        ;
    p--;
    for (q = str; q < p; q++, p--)
    {
        char temp = *q;
        *q = *p;
        *p = temp;
    }
    printf("Reversed string is: %s", str);
    return 0;
}