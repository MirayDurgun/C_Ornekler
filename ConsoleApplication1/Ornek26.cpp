//Sýralý dizide istenen sayýyý bulma arama
#include <stdio.h>
int main() {
    int d[10] = { 1,2,4,300,600,609,700,900,994,999 }; //dizi sýralý olmalý
    int aranan = 300;
    int evetvar = 0;
    int baslangic = 0;
    int son = 9;
    int orta = 0;
    while (evetvar == 0 && baslangic <= son)
    {
        orta = (baslangic + son) / 2;
        printf("Baslangic: %d  son: %d  orta: %d \n", baslangic, son, orta);
        if (aranan == d[orta])
        {
            evetvar = 1;
        }
        else
        {
            if (aranan > d[orta])
            {
                baslangic = orta + 1;
            }
            else
            {
                son = orta - 1;
            }
        }
    }
    (evetvar == 1) ? printf("var") : printf("yok");
}