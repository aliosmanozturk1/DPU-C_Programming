/* Do - While Döngüsü */

#include <stdio.h>

int main()
{
    int x = 6;

    do
    {
        x = x - 2;
        printf("%d\n", x);
    } while (x >= 0);

    return 0;
}