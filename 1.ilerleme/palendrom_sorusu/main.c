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
    **5 adet fonksiyon yaz�n
    **kullan�c�ya karakter dizisi girdiren bir fonksiyon yaz�n
    **kullan�c�n�n girdi�i karakter dizisinin ka� elamanl� oldugunu bulan bir fonksiyon
    yaz�n
    **karakter dizisindeki karakterlerin yerlerini sondan ba�a do�ru yer de�i�tiren bir
    fonksiyon yaz�n
    **bir tane palendrom fonksiyonu yaz�n bu fonksiyon karakter dizisinin ba�tan sona
    ve sondan ba�a yaz�m�nda ayn� karakter d�z�s� olup olmad�g�n� kontrol etsin e�er
    �yleyse yanei palendromsa 1 g�ndersin de�ilse 0 g�ndersin
    **yukar�daki fonksiyonlar� kullanarak kullan�c�dan bir karakter dizisi girmesini
    isteyen daha sonra palendrom olup olmad�g�n� ekrana basan program� yaz�n
    */





    //��z�m�:

    char cumle[100];
    int elamansayisi;


    karakteralma(cumle);
    saydirma(elamansayisi,cumle);
    tersinecevirme(cumle);
    palendrom(cumle)

    printf("girdiginiz %s cumlesindeki elaman sayisi = %d",cumle,elamansayisi);


















    return 0;
}
