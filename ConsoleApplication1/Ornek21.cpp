
/*
//kullan�c�dan ka� zar at�lmas� istenen �rnek
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
		//rand() fonksiyonu, C dilinde bir rastgele say� �reticisi
		//% 6 ifadesi, rand() fonksiyonunun ��kt�s�n� 0 ile 5 aras�nda bir say�ya d�n��t�r�r.
		//+1 ifadesi, ��kt�y� 1 ile 6 aras�nda bir say�ya kayd�r�r.

		printf("%d.atis %d \n", i, zar);
	}
	return 1;
}*/