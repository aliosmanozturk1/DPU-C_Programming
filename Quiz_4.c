#include<stdio.h>

int isPrimeNumber(int num);
int main() {
    int i, j, rows;
    int counter = 2;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            /* Try to find next prime number by
      incrementing counter and testing it for primality */
            while(!isPrimeNumber(counter)){
                counter++;
            }
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
    return(0);
}

