#include <stdio.h>

int main()
{
    int n, x, indexNumber = -1;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            indexNumber = i;
            break;
        }
    }

    printf("%d", indexNumber);
    return 0;
}