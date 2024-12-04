#include <stdio.h>

/* Biçimli (ondalıklı) gösterim  */

int main()
{
    float a = 12345.67;

    printf("\n***\n\n");

    printf("%7.0f\n", a);
    printf("%8.0f\n", a);
    printf("%9.0f\n", a);
    printf("%10.0f\n", a);

    printf("\n***\n\n");

    printf("%7.1f\n", a);
    printf("%8.1f\n", a);
    printf("%9.1f\n", a);
    printf("%10.1f\n", a);

    printf("\n***\n\n");

    printf("%7.2f\n", a);
    printf("%8.2f\n", a);
    printf("%9.2f\n", a);
    printf("%10.2f\n", a);

    printf("\n***\n\n");

    printf("%7.3f\n", a);
    printf("%8.3f\n", a);
    printf("%9.3f\n", a);
    printf("%10.3f\n", a);

    printf("\n***\n\n");

    printf("%7.4f\n", a);
    printf("%8.4f\n", a);
    printf("%9.4f\n", a);
    printf("%10.4f\n", a);

    printf("\n***\n\n");

    printf("%7.5f\n", a);
    printf("%8.5f\n", a);
    printf("%9.5f\n", a);
    printf("%10.5f\n", a);

    return 0;
}
