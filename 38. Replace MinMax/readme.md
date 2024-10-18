# Replace MinMax
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // To take input:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find min and max index
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

    // To swap min and max values:
    int temp = arr[minPosition];
    arr[minPosition] = arr[maxPosition];
    arr[maxPosition] = temp;

    // To print the array:
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```