
/*
//1’den 100’e kadar olan tek sayýlarýn toplamý
#include <stdio.h>
#include <string.h>
int main()
{
    int toplam = 0;
    for (int k = 1;k <= 100;k++) //100e kadar tek sayýlarý toplattýk
        //for k+=2 yaparsak if'e gerek kalmaz
    {
        if (k % 2 == 1) { //%=kalan bulmak için kullanýlýr mod alma
            toplam += k; //tek sayýlarý toplamda tutarýz
        }
    }
    printf("tek %d", toplam);
    return 1;
}*/