#include <stdio.h>
int main()
{
    int n, a, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &c);
        printf("%d\n", 250 * a + 175 * c);
    }
}