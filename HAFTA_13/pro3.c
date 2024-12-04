//EKLEME "a"
//dosyaya veri eklemek
//fputs()
#include <stdio.h>

int main()
{
    FILE *p;
    int sayac=0;
    
    p=fopen("DpuBilgisayar.txt","a");
    
    while(sayac<3)
    {
		fputs("\nBu yeni eklenen satirdir",p);
		sayac++;
    }
    fclose(p);
  	
	return 0;
}
