#include <stdio.h>

int main()
{
	int n,i,sonuc=0,tek=0,cift=0;
	printf("Sayiyi girin:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	sonuc=sonuc+i;
	printf("\nSonuc:%d",sonuc);
	
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		cift+=i;
		else
		tek+=i;
	}
	printf("\nTek Sayilarin Toplami:%d", tek);
	printf("\nCinf sayilarin toplami:%d", cift);
	return(0);
}
