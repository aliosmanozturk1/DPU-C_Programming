#include <stdio.h>

int primeNumberFinder(int number);

int main() {
    // Değişkenleri tanımladık.
    int userMenuInput;
    int row, i, j, space;
    int counter = 2;

    // Programın sürekli devam etmesini sağladık. Kullanıcı istediği takdirde programı bitirebilir.
    while (userMenuInput != 3)
    {
        // Burada kullanıcıya gerekli menüleri sunduk ve menü girdisini aldık.
        printf(" ----- MENÜLER -----\n");
        printf("1. Şekil 1'i çizdir.\n");
        printf("2. Şekil 2'yi çizdir.\n");
        printf("3. Çıkış\n");
        printf("Lütfen bir menü seçiniz: ");
        scanf("%d", &userMenuInput);

        // Kullanıcının seçimlerine göre kodlar belirlendi.
        switch (userMenuInput)
        {
            // Üçgen çizdiren program yazıldı.
            case 1:
                printf("Lütfen bir satır sayısı giriniz: ");
                scanf("%d", &row);

                for(i=row; i>=1; --i)
                {
                    for(space=0; space < row-i; ++space)
                        printf("  ");

                    for(j=i; j <= 2*i-1; ++j)
                        printf("* ");

                    for(j=0; j < i-1; ++j)
                        printf("* ");

                    printf("\n");
                }
                break;

                // Asal sayı yazdıran program yazıldı.
            case 2:
                printf("Lütfen bir satır sayısı giriniz: ");
                scanf("%d", &row);

                for (int i = 1; i <= row; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        while (!primeNumberFinder(counter))
                        {
                            counter++;
                        }
                        printf("%d ", counter);
                        counter++;
                    }
                    printf("\n");
                }
                counter = 2;
                break;
                // Program Bitirildi
            case 3:
                printf("\n!!! PROGRAM BİTTİ !!!\n");
                break;
                // Yanlış Seçim Yaptınız
            default:
                printf("\n!!!!!!!!! YANLIŞ SEÇİM YAPTINIZ !!!!!!!!!\n");
                break;
        }

        printf("\n\n");
    }

    return 0;
}

int primeNumberFinder(int number)
{
    int i, isPrime = 1;
    for (i = 2; i <= (number/2); i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime==1 || number==2)
        return 1;
    else
        return 0;
}


