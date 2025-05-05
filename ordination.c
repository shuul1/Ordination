#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, t;

    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b && c > b && c < a) // acb
    {
        t = b;
        b = c;
        c = t;
    }
    if (b > a && b > c && a > c) // bac
    {
        t = a;
        a = b;
        b = t;
    }
    if (b > a && b > c && c > a) // bca
    {
        t = a;
        a = b;
        b = c;
        c = t;
    }
    if (c > a && c > b && a > b) // cab
    {
        t = a;
        a = c;
        c = b;
        b = t;
    }
    if (c > a && c > b && b > a) // cba
    {
        t = a;
        a = c;
        c = t;
    }
    printf("%d, %d, %d\n", a, b, c);
}
