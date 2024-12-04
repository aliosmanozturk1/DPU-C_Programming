//dosya konum göstergeci
//ftell(): dosya konum göstergecinin o anda nerede 
//		   olduğunu gösterir
//fseek(): dosya konum göstergecini istediğimiz miktarda 
//		   ileri veya geri götürmemizi sağlar
//rewind(): dosya konum göstergecinin dosyanın başına 
//			konumlandırılmasını sağlar
#include <stdio.h>

int main()
{
    FILE* p;
    char satir[200];
    p = fopen("metin.txt", "r")
    
    printf("konum gostericinin ilk yeri: %d\n", ftell(p));
	//0 gösterecek

    fgetc(p);//bir karakter okuyor

    printf("konum gostericinin yeri: %d\n", ftell(p));
	//1 gösterecek

    fseek(p, 5, 0); //0:dosya başı. 
	//0 yerine SEEK_SET yazılabilir.
    //int fseek(FILE *p, long miktar, int baslangic);
    //baslangic 0 : baştan //stdio.h içinde tanımlı
    //baslangic 1 : bulunduğu yerden //stdio.h içinde tanımlı
    //baslangic 2 : sondan //stdio.h içinde tanımlı
    printf("konum gostericinin yeri: %d\n", ftell(p));
	//5 gösterecek 56789 10 11 12 13

    fgets(satir, 10, p);
	//10.karakter sonlandırıcı olacak. 
	//5te kalmıştık,10 git
    printf("%s\n", satir);
	//indis 5-13 yaz, toplam 9. NULL ile 10 
    printf("konum gostericinin yeri: %d\n", ftell(p)); 
	//14 gösterecek
    fseek(p, 3, 1);
	//1:aktif konum. 1 yerine SEEK_CUR yazılabilir.
	//3 ilerleyecek
    printf("konum gostericinin yeri: %d\n", ftell(p));
	//17 gösterecek
    rewind(p);//dosya konum göstergecinin dosyanın başına
    printf("konum gostericinin yeri: %d\n", ftell(p));
	//0 gösterecek

    return 0;
}