//okumak için açılan dosyadan 
//4 adet karakter alip ekrana yazdıran program:
//fgets()

#include <stdio.h> // fgets(), puts

int main()
{
    FILE *p;
    char veri[20];
    
    p=fopen("DpuBilgisayar.txt","r");
	//sadece okumak için açtık
    
    fgets(veri,5,p); //5-1 adet karakter alacak
					//NULL sonlandırma karakteri ile 5 oluyor
    
	puts(veri); //aldığı karakterleri ekrana yazdıracak
    
    fclose(p);
	
	return 0;
}

