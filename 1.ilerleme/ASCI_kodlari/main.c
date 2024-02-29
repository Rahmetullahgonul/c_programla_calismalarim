#include <stdio.h>
#include <stdlib.h>

int main()
{

    // her karaktere denk gelen bir sayi degeri var ve buna ASCI kodlari deniyo
    // mediaclick.com.tr/tr/blog/ascii-nedir



    /*
    printf("%d\t %d\t %d\t\n",'a','b','c'); // \t bir tab kadar boþluk býrakýr
    // ASCI tablosundaki a,b,c nin karþýlýgýný gosterir
   */


//kücük harfleri basti
   int i;

   for(i='a';i<='z';i++)
   {
       printf("%c\n",i);
   }


// büyük harfleri basti
   int b;

   for(b='A';b<='Z';b++)
   {
       printf("%c\n",b);
   }


    return 0;
}
