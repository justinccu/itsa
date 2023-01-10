#include <stdio.h>
int main()
{
    int n;
    int t, m, k;
    int p[100];
    int ans[100];
    scanf("%d", &n);
    for (int r = 0; r < n; r++)
    {
        int spent = 0;
        scanf("%d %d %d", &t, &m, &k);
        for (int i = 0; i < k; i++)
            scanf("%d", &p[i]);
        for (int i = 1; i < k; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int tmp;
                if (p[j] > p[i])
                {
                    tmp = p[j];
                    p[j] = p[i];
                    p[i] = tmp;
                }
            }
        }
        for (int i = 0; i < m; i++)
            spent += p[i];
        if (spent > t)
            ans[r] = -1;
        else
            ans[r] = spent;
    }
    for (int r = 0; r < n; r++)
        if (ans[r] == -1)
            printf("Impossible\n");
        else
            printf("%d\n", ans[r]);
    return 0;
}