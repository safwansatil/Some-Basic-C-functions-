#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n], *p, *q;
    for (p = arr + n - 1; p >= arr; p--)
    {
        scanf("%d", p);
    }
    printf("Array in reverse order: ");
    for (; p < arr + n; p++)
    {
        printf("%d ", *p);
    }
    return 0;
}