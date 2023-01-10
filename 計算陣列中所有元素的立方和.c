#include <stdio.h>
int main()
{
    int a;
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a);
        k += (a * a * a);
    }
    printf("%d\n", k);
    return 0;
}