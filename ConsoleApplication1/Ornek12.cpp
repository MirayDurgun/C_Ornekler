/*
//CLionda hatasýz çalýþýyor
//vize final ortalamasý hesaplama
#include <stdio.h>
#include <string.h>

int main() {
    int vize, final, ortalama;
    printf(" vize notunu:");
    scanf("%d", &vize);
    printf("final notunu giriniz:");
    scanf("%d", &final);
    ortalama = (vize * 0.40) + (final * 0.60);

    printf("*******************\nvize = %d\nfinal= %d\nortalama= %d\n", vize, final, ortalama);
    (ortalama >= 50) ? printf("Gectin") : printf("Kaldin \n*******************");
    return 1;
}*/