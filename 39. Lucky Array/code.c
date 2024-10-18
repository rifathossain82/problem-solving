#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // To take input in array:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the minimum value:
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // To find the total count of min number
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }

    // Check the count is even or odd and print the required text
    if (count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}