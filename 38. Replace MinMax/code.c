#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minPosition = 0, maxPosition = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minPosition])
        {
            minPosition = i;
        }

        if (arr[i] > arr[maxPosition])
        {
            maxPosition = i;
        }
    }

    int temp = arr[minPosition];
    arr[minPosition] = arr[maxPosition];
    arr[maxPosition] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}