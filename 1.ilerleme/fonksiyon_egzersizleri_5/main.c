#include <stdio.h>
#include <stdlib.h>

    int faktoriyel(int n)
    {
        int result=1;
        int i;
        for(i=1;i<=n;i++)
        {
            result = result*i;
        }
          return result;
    }



int main()
{

    /* soru:
    1 den 10 a kadar her bir sayýnýn faktoriyelini fonksiyon kullanarak hesaplayan ve
    sonuçlarýný ekrana listleleyen programý yazýn
    */


    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d! = %d\n",i,faktoriyel(i));
    }

    return 0;
}
