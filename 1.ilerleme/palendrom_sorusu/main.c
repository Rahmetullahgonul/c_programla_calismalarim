#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    //fonksiyon 1
    char karakteralma(char cumle)
    {
        printf("lutfen bi cumle giriniz \n");
        gets(cumle);

        return cumle;
    }


    //fonksiyon 2
    int saydirma(int elamansayisi,char cumle)
    {
        elamansayisi=strlen(cumle);
        return elamansayisi;

    }

    //fonksiyon 3
    char tersinecevirme(char cumle)
    {
        strrev(cumle);
        return cumle;
    }









int main()
{


    /*soru:
    **5 adet fonksiyon yazýn
    **kullanýcýya karakter dizisi girdiren bir fonksiyon yazýn
    **kullanýcýnýn girdiði karakter dizisinin kaç elamanlý oldugunu bulan bir fonksiyon
    yazýn
    **karakter dizisindeki karakterlerin yerlerini sondan baþa doðru yer deðiþtiren bir
    fonksiyon yazýn
    **bir tane palendrom fonksiyonu yazýn bu fonksiyon karakter dizisinin baþtan sona
    ve sondan baþa yazýmýnda ayný karakter dýzýsý olup olmadýgýný kontrol etsin eðer
    öyleyse yanei palendromsa 1 göndersin deðilse 0 göndersin
    **yukarýdaki fonksiyonlarý kullanarak kullanýcýdan bir karakter dizisi girmesini
    isteyen daha sonra palendrom olup olmadýgýný ekrana basan programý yazýn
    */





    //çözümü:

    char cumle[100];
    int elamansayisi;


    karakteralma(cumle);
    saydirma(elamansayisi,cumle);
    tersinecevirme(cumle);
    palendrom(cumle)

    printf("girdiginiz %s cumlesindeki elaman sayisi = %d",cumle,elamansayisi);


















    return 0;
}
