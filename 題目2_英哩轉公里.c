#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d", &a);
    b = (double)a * 1.6; // 轉換
    printf("%.1f\n", b);
}