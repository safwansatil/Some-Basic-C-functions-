#include <stdio.h>
void maxMin(int arr[], int length, int *max, int *min);
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max, min;
    maxMin(arr, n, &max, &min);
    printf("In your array, maximum number was %d and minimum number was %d.", max, min);
}
void maxMin(int arr[], int length, int *max, int *min)
{
    *max = *min = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        else if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
}