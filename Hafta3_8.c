#include <stdio.h>

int main() {
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
                printf("\ni = %d, j = %d, k = %d", i, j, k);
        }
    printf("\nBitti");
    return 0;
}