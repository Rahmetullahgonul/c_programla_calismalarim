#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void hesapla(float r)
{
    printf("dairenin alani = %.2f\n",PI*r*r);
    printf("dairenin cevresi = %.2f\n",2*PI*r);
}

int main()
{

    /* kullan�c� taraf�ndan girilen yar�cap degeri kullan�larak bir dairenin alan�n� ve
    cevresini hesaplayan fonksiyon prototipi a�a��da verilmi�tir

    void hesapla(float yaricap)
    */

    float yaricap;
    printf("lutfen yaricap degerini giriniz : \n");
    scanf("%f",&yaricap);

    hesapla(yaricap);












    return 0;
}
