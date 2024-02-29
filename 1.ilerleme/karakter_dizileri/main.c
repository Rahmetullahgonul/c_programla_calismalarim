#include <stdio.h>
#include <stdlib.h>

int main()
{
            // iki türlü dizi oluþturma vardir


    // karakter dizilerinde sonda '\0' yazmak zorunlu
    char rahmet[]={'r','a','h','m','e','t','\0'} ;


    char dizi[]="zehra";

    printf("%c\n",dizi[1]); // içinden tek bi karakter alma
    printf("%s\n",dizi);    // tüm diziyi bastirma


    printf("%c\n",rahmet[2]);
    printf("%s\n",rahmet);

    // kullanicidan karakter dizisi alma

    char kullanici[20];
    // istersen kaç karakterle sýnýrlamak istediðini de girebilirisin ;
    // char kullanici[20]; 20 karakterle sýnýrladým
    printf("lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);
    printf("\n");
    printf("%s\n",kullanici);



    // dizideki karakteri updatleme

    char karakter_degisme[]="Rahmetullah Gonul";

    karakter_degisme[0]='Z';

    printf("%s",karakter_degisme);

























    return 0;
}
