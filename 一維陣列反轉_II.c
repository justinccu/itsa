#include <stdio.h>
int main()
{
    int a[6];
    for (int i = 5; i >= 0; i--)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[5]);
    return 0;
}