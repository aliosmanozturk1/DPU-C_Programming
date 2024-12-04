#include <stdio.h>

int main()
{
    int identityMatrix[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                identityMatrix[i][j] = 1;
            } else {
                identityMatrix[i][j] = 0;
            }
            printf("%3d", identityMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}