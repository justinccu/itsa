#include <stdio.h>
int main()
{
    int n;
    int a[10], b[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
        scanf("%d", &a[i]);
        int tmp;
        tmp = a[i];
        do
        {
            b[i] += tmp % 10;
            tmp /= 10;
        } while (tmp > 0);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (b[j] > b[i] || (b[j] == b[i] && a[j] > a[i]))
            {
                int tmp;
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n - 1]);
    return 0;
}