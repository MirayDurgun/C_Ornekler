
/*
//sýrasýz dizi örneðini sýralama
#include <stdio.h>
int main() {
    int d[10] = { 1,2,4,300,6,5,7,-993,-1 };
    int adimsayisi = 0;
    int yedek = 0;
    for (int i = 0;i < 10;i++) //ekrana diziyi sýrasýyla yukarýdaki gibi yazar
    {
        printf("[%d]:%d,", i, d[i]);
    }
    printf("\n");
    //bubble short
    for (int i = 0; i < 9; i++) {
        for (int c = 0; c < 8 -i ; c++) //c < 8 -i, i kadar azaltýnca iþlem sayýsý azalýr
        {
            printf(".");
            //iþlem yapýyor
            adimsayisi++;
            if (d[c] > d[c + 1]) {
                //yer deðiþtir
                yedek = d[c];
                d[c] = d[c + 1];
                d[c + 1] = yedek;
            }
        }
    }
    printf("\n");//alt satýra geç
    //diziyi ekranda görelim
    for (int i = 0; i < 10; i++)
    {
        printf("[%d]: %d, ", i, d[i]);
    }
    printf("\n siralama islemi %d adimda tamamlandi", adimsayisi);
}
*/