#include <stdio.h>

int main()
{
	int n,i,sonuc=0;
	printf("Sayiyi girin:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	sonuc=sonuc+i;
	printf("\nSonuc:%d",sonuc);
	return(0);
}
