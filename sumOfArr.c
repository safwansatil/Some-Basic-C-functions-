#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n], *q;
    for (q = arr; q < arr + n; q++)
    {
        scanf("%d", q);
    }
    int sum = 0, *p;
    for (p = arr; p < arr + n; p++)
    {
        sum += *p;
    }
    printf("Sum is %d", sum);
}