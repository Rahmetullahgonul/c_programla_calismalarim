#include <stdio.h>
#include <stdlib.h>

int main()
{

    // her karaktere denk gelen bir sayi degeri var ve buna ASCI kodlari deniyo
    // mediaclick.com.tr/tr/blog/ascii-nedir



    /*
    printf("%d\t %d\t %d\t\n",'a','b','c'); // \t bir tab kadar bo�luk b�rak�r
    // ASCI tablosundaki a,b,c nin kar��l�g�n� gosterir
   */


//k�c�k harfleri basti
   int i;

   for(i='a';i<='z';i++)
   {
       printf("%c\n",i);
   }


// b�y�k harfleri basti
   int b;

   for(b='A';b<='Z';b++)
   {
       printf("%c\n",b);
   }


    return 0;
}
