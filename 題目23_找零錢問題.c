#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d,%d,%d,%d", &n, &a, &b, &c);
    n -= 15 * a;
    n -= 20 * b;
    n -= 30 * c;
    if (n < 0)
    {
        printf("0\n");
        return 0;
    }
    int x, y;
    x = n / 50;
    n %= 50;
    y = n / 5;
    n %= 5;
    printf("%d,%d,%d\n", n, y, x);
    return 0;
}