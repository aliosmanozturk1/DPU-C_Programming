#include <stdio.h>

int main()
{
    int Matrix_A[4][4];
    int Matrix_B[4][4];
    int Multiply_Matrix[4][4];
    int sum;

    printf("Dizinin elemanlarını giriniz!\n");
    // Matrix_A'nın elemanlarını kullanıcıdan alalım.
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            printf("Matrix_A[%d][%d] elemanını giriniz: ", i, j);
            scanf("%d", &Matrix_A[i][j]);
        }
    }

    // Matrix_B'nin elemanlarını kullanıcıdan alalım.
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            printf("Matrix_B[%d][%d] elemanını giriniz: ", i, j);
            scanf("%d", &Matrix_B[i][j]);
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum = 0;
            for (int k = 0; k < 4; k++)
            {
                sum += Matrix_A[i][k]*Matrix_B[k][j];
                Multiply_Matrix[i][j] = sum;
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", Multiply_Matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}