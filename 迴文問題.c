#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int n;
    n = strlen(s);
    int cal = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[cal] != s[i])
        {
            printf("NO\n");
            return 0;
        }
        cal--;
    }
    printf("YES\n");
    return 0;
}