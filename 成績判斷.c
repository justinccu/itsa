#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 100)
        printf("error\n");
    else if (n >= 90)
        printf("A\n");
    else if (n >= 80)
        printf("B\n");
    else if (n >= 70)
        printf("C\n");
    else if (n >= 60)
        printf("D\n");
    else if (n >= 0 && n < 60)
        printf("E\n");
    else
        printf("error\n");
    return 0;
}