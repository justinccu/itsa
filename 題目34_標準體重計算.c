#include <stdio.h>
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        float m;
        if (y == 1) // boy
        {
            m = (x - 80) * 0.7;
            printf("%.1lf\n", m);
        }
        else // girl
        {
            m = (x - 70) * 0.6;
            printf("%.1f\n", m);
        }
    }
    return 0;
}