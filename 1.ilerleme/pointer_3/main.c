#include <stdio.h>
#include <stdlib.h>

void degistir(int *a,int *b)
{
    int degisken;

    degisken=*a;
    *a=*b;
    *b=degisken;
}

int main()
{

    /* pointer degiskenin adresiyle fonksiyon cagirma*/

    int a=10,b=20;
    printf("cagirmadan once a=%d ve b=%d\n",a,b);
    degistir(&a,&b);


    printf("cagirdiktan sonraki a=%d ve b=%d \n",a,b);

    /* egerki adresle gondermemis olsayadik ve yukardaki fonksiyonda return etmeseydik
    degiskenlerin degerleri sadece yukardaki fonksiyonda degisirdi main fonksiyondaki
    a ve b degerlerinde bi degisiklik olmazdi */





    return 0;
}
