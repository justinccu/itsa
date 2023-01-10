#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    x *= x;
    y *= y;
    if (x + y <= 10000) //距離平方
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}