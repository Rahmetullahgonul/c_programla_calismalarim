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
    //�rnek



    /*
    // eger define ile tan�mlanm��sa �al���r
    // tan�mlanmam��sa �al��maz


    #ifdef PI
    printf("C harika gidiyor \n");
    #endif // PI

    //tan�mlanmam�� define
    #ifdef PIIIIIIIIIIII
    printf("C harika gidiyor");
    #endif // PIIIIIIIIIIII

    printf("C m�thi� gidiyor");
    */



    /*
    //eger ifdefden ge�erse ifdef yazd�r�l�r
    //eger ki ifdefden gidemezse alt sat�rlara iner else vb


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
    printf("sayimiz : %d\n",SAYI); //say� 5 define edilrse bu �al���r
    #else
    printf("sayimiz 5 den farklidir \n"); // say� 5 define edilmez ise bu �al���r
    #endif















    return 0;
}
