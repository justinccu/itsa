#include <stdio.h>

int main()
{
    int n;
    int b[10];
    scanf("%d", &n);
    if (n < 0)
        n += 256; // 負數推至正數
    for (int i = 7; i >= 0; i--)
    {
        b[i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 8; i++)
        printf("%d", b[i]);
    printf("\n");
}