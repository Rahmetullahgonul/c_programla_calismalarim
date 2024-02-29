#include <stdio.h>
#include <stdlib.h>

int main()
{


    /* soru:
    farklı data typlar icin (char int float double) degisken tanımlayıp deger atamasini
    yapiniz hem bu degerleri hem de bellekteki tuttuklari adresi consala basin
    */

    char karakter ='R';
    int degerim=1;
    float sayim=5.43;
    double doublesayim=2134242125521;

    printf("karakterim = %c\ ve karakterimin adresi=%d\n",karakter,&karakter);
    printf ("int sayimin degeri = %d ve adresi =%d\n",degerim,&degerim);
    printf("float sayimin degeri = %f ve adresi = %d\n",sayim,&sayim);
    printf("double sayimin degeri = %lf ve adresi = %d\n",doublesayim,&doublesayim);

    return 0;
}
