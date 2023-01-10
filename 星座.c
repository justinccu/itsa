#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m, d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &d);
        if (m == 1)
        {
            if (d >= 21)
                printf("Aquarius\n");
            else
                printf("Capricorn\n");
        }
        if (m == 2)
        {
            if (d <= 18)
                printf("Aquarius\n");
            else
                printf("Pisces\n");
        }
        if (m == 3)
        {
            if (d <= 20)
                printf("Pisces\n");
            else
                printf("Aries\n");
        }
        if (m == 4)
        {
            if (d <= 20)
                printf("Aries\n");
            else
                printf("Taurus\n");
        }
        if (m == 5)
        {
            if (d <= 21)
                printf("Taurus\n");
            else
                printf("Gemini\n");
        }
        if (m == 6)
        {
            if (d <= 21)
                printf("Gemini\n");
            else
                printf("Cancer\n");
        }
        if (m == 7)
        {
            if (d <= 22)
                printf("Cancer\n");
            else
                printf("Leo\n");
        }
        if (m == 8)
        {
            if (d <= 23)
                printf("Leo\n");
            else
                printf("Virgo\n");
        }
        if (m == 9)
        {
            if (d <= 23)
                printf("Virgo\n");
            else
                printf("Libra\n");
        }
        if (m == 10)
        {
            if (d <= 23)
                printf("Libra\n");
            else
                printf("Scorpio\n");
        }
        if (m == 11)
        {
            if (d <= 22)
                printf("Scorpio\n");
            else
                printf("Sagittarius\n");
        }
        if (m == 12)
        {
            if (d <= 21)
                printf("Sagittarius\n");
            else
                printf("Capricorn\n");
        }
    }
    return 0;
}