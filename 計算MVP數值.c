#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    int mvp;
    mvp = a[0] + 2 * a[1] + 2 * a[2] + 2 * a[3] - 2 * a[4];
    if (mvp >= 45)
        printf("A\n");
    else if (mvp >= 35)
        printf("B\n");
    else if (mvp >= 25)
        printf("C\n");
    else
        printf("D\n");
    return 0;
}