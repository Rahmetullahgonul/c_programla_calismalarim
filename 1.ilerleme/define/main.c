#include <stdio.h>
#include <stdlib.h>


#define PI 3.14 // obje tipinde macro tan�mlama
#define circleArea(r) (PI*r*r) // fonksiyon tipinde macro tan�mlama

int main()
{

    /*
    define s�rekli kullan�lacak olan bir bilgiyi/de�eri kodlamada sabitlemek gibi
    d���n�lebilir
    �rne�in:
    */

    float yaricap1,yaricap2,alan;

    printf("lutfen iki adet yaricap giriniz : \n");
    scanf("%f",&yaricap1);
    scanf("%f",&yaricap2);

    alan=circleArea(yaricap1);
    printf("ilk girdiginiz cemberin yaricapi : %.2f\n",alan);

    alan=circleArea(yaricap2);
    printf("ikinci girdiginiz cemberin yaricapi : %.2f\n",alan);








    return 0;
}
