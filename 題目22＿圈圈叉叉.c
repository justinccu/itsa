#include <stdio.h>
int main()
{
    int a[9];
    for (int i = 0; i < 9; i++)
        scanf("%d", &a[i]);
    if (a[1] == a[2] && a[2] == a[0]) // 判別是否連成線
        printf("True\n");
    else if (a[4] == a[5] && a[5] == a[3])
        printf("True\n");
    else if (a[6] == a[7] && a[7] == a[8])
        printf("True\n");
    else if (a[3] == a[6] && a[6] == a[0])
        printf("True\n");
    else if (a[4] == a[7] && a[7] == a[1])
        printf("True\n");
    else if (a[5] == a[2] && a[2] == a[8])
        printf("True\n");
    else if (a[0] == a[4] && a[4] == a[8])
        printf("True\n");
    else if (a[2] == a[4] && a[4] == a[6])
        printf("True\n");
    else
        printf("False\n");
}