#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Casting

 /*
   int sayi=9/4;
   printf("%d",sayi);
   // normalde ekranda 2.25 yazmas� laz�mken int oldugu i�in 2 yaziyo
 */


 /*
   float sayi=9/4;
   float sayi2=2.25;
   printf("%f %f",sayi,sayi2);
   // 2.25 i 2.25 olarak basarken 9/4 � 2 olarak basti
*/


// bu problemden kast ederek(casting) ile ��z�m buluyoruz

    float sayi = (float)9/4;
    printf("%f",sayi);

    //art�k degeri 2.25 olarak basiyo

    return 0;
}
