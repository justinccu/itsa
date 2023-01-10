#include <stdio.h>
int main()
{
    int a[7];
    int dice;
    for (int i = 1; i <= 6; i++)
        a[i] = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &dice);
        a[dice]++;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (a[i] == 4)
        {
            printf("WIN\n");
            return 0;
        }
        if (a[i] == 3)
        {
            printf("R\n");
            return 0;
        }
        if (a[i] == 2)
            count++;
    }
    int total = 0;
    if (count == 2)
    {
        int max = -1;
        for (int i = 1; i <= 6; i++)
        {
            if (a[i] == 2)
            {
                if (2 * i > max)
                    max = 2 * i;
            }
        }
        total = max;
        printf("%d\n", total);
        return 0;
    }
    if (count == 1)
    {
        for (int i = 1; i <= 6; i++)
        {
            if (a[i] == 1)
                total += i;
        }
        printf("%d\n", total);
        return 0;
    }
    printf("R\n");
    return 0;
}