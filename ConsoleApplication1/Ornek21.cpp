
/*
//kullanýcýdan kaç zar atýlmasý istenen örnek
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int i, n, zar;
	srand(time(NULL));
	printf("Zar atin%d");
	printf("zar kac kere atilsin");
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		zar = (rand() % 6) + 1; //
		//rand() fonksiyonu, C dilinde bir rastgele sayý üreticisi
		//% 6 ifadesi, rand() fonksiyonunun çýktýsýný 0 ile 5 arasýnda bir sayýya dönüþtürür.
		//+1 ifadesi, çýktýyý 1 ile 6 arasýnda bir sayýya kaydýrýr.

		printf("%d.atis %d \n", i, zar);
	}
	return 1;
}*/