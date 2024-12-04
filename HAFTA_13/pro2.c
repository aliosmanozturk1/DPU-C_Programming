//YAZMA "w"
//fputs ile dosyaya yazdirmak
//iki karakter dizinini birlestirip dosyaya 5 defa yazalim

#include <stdio.h>

int main()
{
    FILE* p;
    char dizi1[30] = "DPU";
    char dizi2[30] = " Bilgisayar Muhendisligi\n";
    int sayac = 0;
    p = fopen("metin.txt", "w");//metin.txt olusturuluyor
    //p = fopen("C:\\ZZ_CPROG\\metin.txt", "w");

    do {
        sayac++;
        fputs(dizi1, p); //stringi isaretçinin gösterdigi dosyaya yaz
        fputs(dizi2, p); //stringi isaretçinin gösterdigi dosyaya yaz
    } while (sayac < 5);

    fclose(p);

    return 0;
}


