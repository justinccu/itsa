#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[10];
    int cal = 0;
    while (n / 10)
    {
        a[cal] = n % 10;
        n /= 10;
        cal++;
    }
    a[cal] = n;
    int tmp = cal;
    for (int i = 0; i <= cal; i++)
    {
        if (a[i] != a[tmp])
        {
            printf("NO\n");
            return 0;
        }
        tmp--;
    }
    printf("YES\n");
    return 0;
}