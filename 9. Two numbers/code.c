#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);  // 10 3

    // Manual calculation:
    int floorResult = a / b;  // 10 / 3 = 3 (division result)
    int ceilResult = (a + b - 1) / b;  // 10 + 3 - 1 = 12, 12 / 3 = 4
    int roundResult = (a + b / 2) / b;   // 3 / 2 = 1, 10 + 1 = 11, 11 / 3 = 3

    printf("floor %d / %d = %d\n", a, b, floorResult);
    printf("ceil %d / %d = %d\n", a, b, ceilResult);
    printf("round %d / %d = %d\n", a, b, roundResult);

    return 0;
}