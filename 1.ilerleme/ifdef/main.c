#include <stdio.h>
#include <stdlib.h>


#define PI 3.14
#define VARMI
#define SAYI 15


int main()
{

/*
    #ifdef PI
    //code
    #endif


    #ifdef PIIIIII
    //successful code
    #else
    //else code
    #endif
*/
    //örnek



    /*
    // eger define ile tanýmlanmýþsa çalýþýr
    // tanýmlanmamýþsa çalýþmaz


    #ifdef PI
    printf("C harika gidiyor \n");
    #endif // PI

    //tanýmlanmamýþ define
    #ifdef PIIIIIIIIIIII
    printf("C harika gidiyor");
    #endif // PIIIIIIIIIIII

    printf("C müthiþ gidiyor");
    */



    /*
    //eger ifdefden geçerse ifdef yazdýrýlýr
    //eger ki ifdefden gidemezse alt satýrlara iner else vb


    #ifdef PIIIIII
    printf("C harika gidiyor");
    #else
    printf("C efsane gidiyor");
    #endif // PIIIIII
    */




    /*
    int sayi;
    #ifdef VARMIIIIIIIIIII
    sayi=2;
    #else
    printf("lutfen bir deger giriniz \n");
    scanf("%d",&sayi);
    #endif

    printf("%d",sayi);
    */




    //if_else kullanmak:


    #if(SAYI==5)
    printf("sayimiz : %d\n",SAYI); //sayý 5 define edilrse bu çalýþýr
    #else
    printf("sayimiz 5 den farklidir \n"); // sayý 5 define edilmez ise bu çalýþýr
    #endif















    return 0;
}
