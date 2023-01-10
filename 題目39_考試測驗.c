#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[3];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        int tmp;
        for (int i = 1; i < 3; i++) // 分數從小排到大
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i] < a[j])
                {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        if (a[0] >= 60 && a[1] >= 60 && a[2] >= 60)
        {
            printf("P\n");
            continue;
        }
        else if (a[1] >= 60 && a[0] < 60)
        {
            if (a[0] + a[1] + a[2] >= 220)
            {
                printf("P\n");
                continue;
            }
            else
            {
                printf("M\n");
                continue;
            }
        }
        else if (a[1] < 60 && a[2] >= 80)
        {
            printf("M\n");
            continue;
        }
        printf("F\n");
    }
    return 0;
}