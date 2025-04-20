#include <stdio.h>
int main()
{
    long n;
    printf("Enter number: ");
    scanf("%ld", &n);
    int digit_seen[10] = {-1};
    for (int i = 1; i < 10; i++)
    {
        digit_seen[i] = -1;
    }
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit] != -1)
        {
            break;
        }
        digit_seen[digit] = 1;
        n /= 10;
    }
    if (n > 0)
    {
        printf("Repeated digits in number.");
    }
    else
    {
        printf("No repeat in digits.");
    }
}