//okumak için açılan dosyadaki karakterleri 
//teker teker okuyup ekrana yazdiran program
//eof ve feof() kullanımı

#include <stdio.h> //getc()

int main()
{
    char ch;
	FILE *p;
	p=fopen("DpuBilgisayar.txt","r");
    
	do{
		ch=getc(p);
		printf("%c\n",ch);
    }while(!feof(p));
    //}while(ch!=EOF);
	
	fclose(p);
	
	return 0;
}


