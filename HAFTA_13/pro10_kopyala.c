//bir dosyadan başka bir dosyaya veri kopyalama
#include <stdio.h>
int main()
{
    FILE *p1,*p2;   
    
	p1=fopen("metin.txt","r");
	
	p2=fopen("metin2.txt","w");
	
	while(!feof(p1))
	{
		putc(getc(p1),p2);
	}
	return 0;
}
/*dosya sonu karakteri sorun olursa:
while (!feof(p1))
	{
		if ((c=getc(p1)) == EOF) break;
		else putc(c, p2);
	}
//ya da
	do
	{
		c = getc(p1);
		if (c == EOF) break;
		putc(c, p2);
	} while (c != EOF)

*/