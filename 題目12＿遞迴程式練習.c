#include <stdio.h>

int f(int x)
{
    if (x == 0 || x == 1)
        return x + 1;
    else
        return f(x - 1) + f(x / 2);
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}