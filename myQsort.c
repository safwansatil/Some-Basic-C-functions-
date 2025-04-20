#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int *partition(int *low, int *high)
{
    int pivot = *high;
    int *i = low - 1;
    for (int *j = low; j < high; j++)
    {
        if (*j <= pivot)
        {
            i++;
            swap(i, j);
        }
    }
    swap(i + 1, high);
    return i + 1;
}
void myQsort(int *low, int *high)
{
    if (low < high)
    {
        int *p = partition(low, high);
        myQsort(low, p - 1);
        myQsort(p + 1, high);
    }
}
int main()
{
    printf("Enter number of elements in array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &arr[j]);
    }
    myQsort(arr, arr + n - 1);
    printf("Sorted array: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}