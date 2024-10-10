# Replacement

### [*Codeforces Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C)


<br> 

### Code
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int temp[n];

    /// Take input and put with replacement value in temp:
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
        {
            temp[i] = 2;
        }
        else if (arr[i] > 0)
        {
            temp[i] = 1;
        }
        else
        {
            temp[i] = arr[i];
        }
    }

    /// Print the replacement array:
    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
}
```