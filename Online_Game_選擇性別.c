#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c=='E')
        printf("ByeBye\n");
    else if(c=='M')
        printf("Male\n");
    else if(c=='F')
        printf("Female\n");
    return 0;
}