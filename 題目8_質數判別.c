#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0) // 不是質數
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}