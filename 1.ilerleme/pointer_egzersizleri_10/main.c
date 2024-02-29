#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru :
    kullanıcıdan bir karakter dizisi girmesini isteyin ve bu girdiginiz karakter
    dizisinin kac karakterden olustugunu ekrana yazdiran bir porgram yazin
    */

    char rahmet[100];
    char *ptr;

    printf("lutfen bir kelime veya cumle giriniz : \n");
    gets(rahmet);


    for(ptr=rahmet;*ptr;ptr++)
    {

    }
    printf("girmis oldugunuz %s karakter dizisinin icinde %d kadar karakter bulunur"
           ,rahmet,ptr-rahmet);







    return 0;
}
