#include <stdio.h>

int main()
{
	int x,y,i,sonuc=1;
	
	printf("Ussu alýnacak sayýyý giriniz:   ");
	scanf("%d", &x);
	printf("\nUssu olan sayiyi giriniz:   ");
	scanf("%d", &y);
	
	for(i=0;i<y;i++);
		sonuc*=x;
	printf("\nSonuc:%d", sonuc);
	return(0);

}

