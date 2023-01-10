#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float s = 0, ns = 0;
    if (n > 700)
    {
        s += 5.63 * (n - 700);
        ns += 4.5 * (n - 700);
        n = 700;
    }
    if (n > 500)
    {
        s += 4.97 * (n - 500);
        ns += 4.01 * (n - 500);
        n = 500;
    }
    if (n > 330)
    {
        s += 4.39 * (n - 330);
        ns += 3.61 * (n - 330);
        n = 330;
    }
    if (n > 120)
    {
        s += 3.02 * (n - 120);
        ns += 2.68 * (n - 120);
        n = 120;
    }
    s += 2.1 * n;
    ns += 2.1 * n;
    printf("Summer months:%.2f\n", s);
    printf("Non-Summer months:%.2f\n", ns);
}