#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        /// swap (x,y) if x is grater than y
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        /// calculate the sum of consecutive odd numbers from x to y (exclusive x and y)
        int sum = 0;
        for (int j = x + 1; j < y; j++)
        {
            // find the odd
            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}