#include <stdio.h>

int main()
{
    int x, y;
    int m;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        for (int i = 1; i <= y; i++)
            if (x % i == 0 && y % i == 0) // 整除
                m = i;
    }
    else
    {
        for (int i = 1; i <= x; i++)
            if (y % i == 0 && x % i == 0) // 整除
                m = i;
    }
    printf("%d\n", m);
    return 0;
}