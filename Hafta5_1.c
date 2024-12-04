#include <stdio.h>

int topla(int a, int b);

int main()
{
    int a = 1, b = 9;
    printf("a + b = %d\n", topla(a, b));

    return 0;
}

int topla(int a, int b)
{
    return a + b;
}