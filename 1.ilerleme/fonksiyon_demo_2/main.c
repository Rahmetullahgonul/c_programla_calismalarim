#include <stdio.h>
#include <stdlib.h>


    float fonksiyon(float sayi)
    {
        printf("fonksiyonun sonucu = %.3f",sayi*sayi*sayi+13*sayi*sayi+47*sayi+5);
    }

int main()
{

    /*soru 1:
    kullan�c� taraf�ndan girilen reel bir say�n�n a�a��daki fonksiyona g�re de�erini
    ekrana bast�r�n
    f(x)=x^3 + 13x^2 + 47x + 5
    */



/*
    //��z�m�:

    float sayi;
    printf("lutfen fonksiyona sokmak istediginiz degeri giriniz : \n");
    scanf("%f",&sayi);

    printf("fonksiyonun sonucu = %.3f",sayi*sayi*sayi+13*sayi*sayi+47*sayi+5);

*/


    // fonksiyon kullanarak ��z�m�:


    float sayi;
    printf("lutfen fonksiyona sokmak istediginiz degeri giriniz : \n");
    scanf("%f",&sayi);

    fonksiyon(sayi);




    return 0;
}
