/* For İçi */

#include <stdio.h>

int main() {
    int a, b;
    for(a = 0, b = 10; a < 3 && b < 16; a++, b+=5)
        printf("%d, %d\n", a, b);

    return 0;
}