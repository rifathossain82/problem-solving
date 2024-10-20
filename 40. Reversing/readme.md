# Reversing
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F)


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

    // To reversed the array:
    for (int i = 0; i < n / 2; i++)
    {
        // Like number swaping
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // To print the reversed arrary:
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```