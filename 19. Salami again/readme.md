# Salami again- Assignment 2
### [*Problem Link*](https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/salami-again)


<br> 

### Code
```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", max - arr[i]);
    }

    return 0;
}
```