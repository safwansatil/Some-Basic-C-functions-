#include <stdio.h>
int myStrlen(char *str);
int myStrcmp(char *str1, char *str2);
void myStrcpy(char *str1, char *str2);
void myStrcat(char *str1, char *str2);
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Length of first string is %d\n", myStrlen(str1));
    printf("Length of second string is %d\n", myStrlen(str2));
    printf("Comparison of strings is %d\n", myStrcmp(str1, str2));
    myStrcpy(str1, str2);
    printf("After copying, first string is: %s\n", str1);
    myStrcat(str1, str2);
    printf("After concatenation, first string is: %s\n", str1);
    return 0;
}
int myStrlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int myStrcmp(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return 0;
        }
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
    {
        return 1;
    }
    return 0;
}
void myStrcpy(char *str1, char *str2)
{
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
void myStrcat(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}