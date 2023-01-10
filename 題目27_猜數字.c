#include <stdio.h>

int main()
{
    char c[5], b[5];
    scanf("%s", c);
    while (1)
    {
        scanf("%s", b);
        int a = 0, na = 0;                                            // a = 位置數字正確, na = 僅數字正確
        if (b[0] == '0' && b[1] == '0' && b[2] == '0' && b[3] == '0') // end game
            return 0;
        for (int i = 0; i < 4; i++) // 位置與數字判別
        {
            for (int j = 0; j < 4; j++)
            {
                if (c[j] == b[i] && i == j)
                    a++;
                else if (c[j] == b[i])
                    na++;
            }
        }
        printf("%dA%dB\n", a, na);
    }
    return 0;
}