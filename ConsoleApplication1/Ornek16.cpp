
/*
//1�den 100�e kadar olan tek say�lar�n toplam�
#include <stdio.h>
#include <string.h>
int main()
{
    int toplam = 0;
    for (int k = 1;k <= 100;k++) //100e kadar tek say�lar� toplatt�k
        //for k+=2 yaparsak if'e gerek kalmaz
    {
        if (k % 2 == 1) { //%=kalan bulmak i�in kullan�l�r mod alma
            toplam += k; //tek say�lar� toplamda tutar�z
        }
    }
    printf("tek %d", toplam);
    return 1;
}*/