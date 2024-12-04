#include <stdio.h>

int main()
{
    int A[3][2] ={1,2,3,4,5,6};

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A[%d][%d]: %d\n", i, j, A[i][j]);
        }
    }
    return 0;
}