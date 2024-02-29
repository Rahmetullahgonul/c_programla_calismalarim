#include <stdio.h>
#include <stdlib.h>


#define PI 3.14 // obje tipinde macro tanýmlama
#define circleArea(r) (PI*r*r) // fonksiyon tipinde macro tanýmlama

int main()
{

    /*
    define sürekli kullanýlacak olan bir bilgiyi/deðeri kodlamada sabitlemek gibi
    düþünülebilir
    örneðin:
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
