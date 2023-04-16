

/*
//CLionda hatasýz çalýþýyor
//kullanýcýdan istenen 4 sayidan En buyuk sayýyý bulma
#include <stdio.h>
#include <string.h>

int main() {
	int sayi1, sayi2, sayi3, sayi4;
	printf(" 1.sayi:");
	scanf("%d", &sayi1);
	printf("2.sayi2:");
	scanf("%d", &sayi2);
	printf("3.sayi:");
	scanf("%d", &sayi3);
	printf("4.sayi:");
	scanf("%d", &sayi4);

	printf("*******************\n1.sayi = %d\n2.sayi= %d\n3.sayi= %d\n4.sayi= %d\n", sayi1, sayi2, sayi3, sayi4);

	if (sayi1 > sayi2 && sayi1 > sayi3 && sayi1 > sayi4)
	{
		printf("------- \n1. sayi buyuk=%d", sayi1);
	}
	if (sayi2 > sayi1 && sayi2 > sayi3 && sayi2 > sayi4)
	{
		printf("------- \n2. sayi buyuk=%d", sayi2);
	}
	if (sayi3 > sayi1 && sayi3 > sayi2 && sayi3 > sayi4)
	{
		printf("------- \n3. sayi buyuk=%d", sayi3);
	}
	if (sayi4 > sayi1 && sayi4 > sayi2 && sayi4 > sayi3)
	{
		printf("------- \n4. sayi buyuk =%d", sayi4);
	}
	return 1;*/

/*
	//2. yapimi
#include <stdio.h>
int main() {
	int sayi1, sayi2, sayi3, sayi4, enBuyuk;
	sayi1 = 1;
	sayi2 = 5;
	sayi3 = -15;
	sayi4 = 99;
	if (sayi1 > sayi2) //sayi1 sayi 2den büyükmü
	{
		enBuyuk = sayi1; //öyleyse sayi1i enbüyük al
	}
	else {
		enBuyuk = sayi2; //deðilse sayi 2yi en büyük al...
	}
	if (enBuyuk < sayi3)
	{
		enBuyuk = sayi3;
	}
	if (enBuyuk < sayi4)
	{
		enBuyuk = sayi4;
	}
	printf("En Buyuk = %d", enBuyuk);
}
*/