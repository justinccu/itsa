#include <stdio.h>

int main()
{
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    if (x1 > y1)
        y1 += 24;
    int t1, t2;
    t1 = y1 - x1;
    t2 = t1 * 60 + y2 - x2; // 總分鐘差
    t1 = t2 / 30;           // 多少半小時
    int m = 0;
    if (t1 >= 4) // 兩小時
    {
        m += 30 * 4;
        if (t1 >= 8) // 四小時
        {
            m += 40 * 4;
            if (t1 > 8) // 超過四小時
                m += 60 * (t1 - 8);
        }
        else
            m += 40 * (t1 - 4);
    }
    else
        m += 30 * t1;
    printf("%d\n", m);
    return 0;
}