#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a1, a2, b1, b2;
    char op;
    for (int i = 0; i < n; i++)
    {
        scanf(" %c%d%d%d%d", &op, &a1, &a2, &b1, &b2);
        switch (op)
        {
        case '+':
            printf("%d %d\n", a1 + b1, a2 + b2);
            break;
        case '-':
            printf("%d %d\n", a1 - b1, a2 - b2);
            break;
        case '*':
            printf("%d %d\n", a1 * b1 - a2 * b2, a2 * b1 + a1 * b2);
            break;
        case '/':
            printf("%d %d\n", (a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2), (a2 * b1 - a1 * b2) / (b1 * b1 + b2 * b2));
            break;
        }
    }
}