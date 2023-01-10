#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0) //被3整除
            t += i;
    }
    printf("%d\n", t);
    return 0;
}