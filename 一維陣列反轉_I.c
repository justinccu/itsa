#include <stdio.h>
int main()
{
    int a[100];
    int n = 0;
    while (scanf("%d", &a[n]) != EOF)
        n++;
    for (int i = n - 1; i > 0; i--)
        printf("%d ", a[i]);
    printf("%d\n", a[0]);
    return 0;
}