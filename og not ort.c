#include <stdio.h>

int main()
{
	int og_sayisi,i,eb_not=0,j;
	float ort=0;
	
	printf("Ogrenci sayisini girin:\n");
	scanf("%d",&og_sayisi);
	int notlar[og_sayisi];
	
	for(i=0 ; i<og_sayisi ; i++)
	{
		printf("%d.Ogrenci notunu girin:",i+1);
		scanf("%d",&notlar[i]);
		ort +=notlar[i];
		
	}
	ort = ort / og_sayisi;
	printf("\nortalama=%f\n",ort);
	for(i=0 ; i<og_sayisi; i++);
	
	return(0);
}
