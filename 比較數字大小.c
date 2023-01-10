#include <stdio.h>
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int tmp;
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
            }
        }
    }
    printf("%d>%d>%d\n", a[2], a[1], a[0]);
    return 0;
}