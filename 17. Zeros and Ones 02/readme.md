# Zeros and Ones 02 - Assignment 2
### [*Problem Link*](https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeros-and-ones-02/problem)


<br> 

### Code
```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == i + 1)
        {
            if (arr[i] == 0)
            {
                arr[i] = 1;
            }
            if (arr[i] == 1)
            {
                arr[i] == 0;
            }
        }

        printf("%d ", arr[i]);
    }

    return 0;
}
```