#include <stdio.h>
#include <stdlib.h>

int main()
{

   //Casting

 /*
   int sayi=9/4;
   printf("%d",sayi);
   // normalde ekranda 2.25 yazmasý lazýmken int oldugu için 2 yaziyo
 */


 /*
   float sayi=9/4;
   float sayi2=2.25;
   printf("%f %f",sayi,sayi2);
   // 2.25 i 2.25 olarak basarken 9/4 ü 2 olarak basti
*/


// bu problemden kast ederek(casting) ile çözüm buluyoruz

    float sayi = (float)9/4;
    printf("%f",sayi);

    //artýk degeri 2.25 olarak basiyo

    return 0;
}
