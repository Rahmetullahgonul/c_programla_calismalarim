#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*
    //strlen() kullanımı

    char rahmet[]="Aralik";

   // printf("Karakter dizimizin boyu %d",strlen(rahmet));
   // karakter dizimizin boyunu öðrenebiliriz

    // printf("Karakter dizimizin boyu %d",sizeof(rahmet));
    // sizeof '\0' karakterini dahil eder o yüzden sonuç 1 fazla geldi

    */



    /*
    //strcmp() kullanımı
    // ASCI kodalarini göre karakter dizilerini kıyaslar

    char rahmet[15]="abcdef";
    char zehra[15]="ABCDEF";

    int result;

    result =strcmp(rahmet,zehra);
    printf("%d\n",result); // 1 degeri geldi demek ki rahmetteki karakterlerin
    //ASCI kodlari daha buyuk

    if(result<0)
    {
        printf("rahmet zehradan daha kucuktur\n");
    }
    else if(result>0)
    {
        printf("rahmet zehradan daha buyuktur\n");
    }
    else
    {
        printf("rahmet zehraya esittir\n");
    }
    */




    /*
    //strncmp() kullanımı
    // istenen karaktere kadar kıyaslama yapma (örn. ilk 3 karakter vb.)
    // yine ASCI tablosunu kullanır

    char rahmet[15]="abcdef";
    char zehra[15]="ABCDEF";

    int result;

    result =strncmp(rahmet,zehra,4);

    if(result<0)
    {
        printf("rahmet zehradan daha kucuktur\n");
    }
    else if(result>0)
    {
        printf("rahmet zehradan daha buyuktur\n");
    }
    else
    {
        printf("rahmet zehraya esittir\n");
    }
    */




    /*
    // strcpy() kullanımı
    // bildiğimiz kopyala yapıştır

    char rahmet[]="benim adim rahmetullah";
    char zehra[100];


    strcpy(zehra,rahmet); // kopyalanacak olan sonra yazılır
    printf("%s",zehra);
    */



    /*
    // strncpy()
    // istedigin karakter sayisi kadar karakter kopyalarsın

    char rahmet[]="benim adim rahmetullah";
    char zehra[100];


    strncpy(zehra,rahmet,11); // kopyalanacak olan sonra yazılır
    printf("%s",zehra);
    */


    /*
    // strcat() kullanımı
    // iki tane karakter dizisini birleştiri

    char rahmet[]="Selam dunya ";
    char zehra[]="benim adim nammmeee\n";

    printf(strcat(rahmet,zehra));

    // veya
    char bir[]="benim adim ";
    printf(strcat(bir,"Rahmetullah"));
    */


    /*
    // strncat kullanimi
    // iki tane karakter dizisini birleştirir(istediğin karaktere kadar)

    char rahmet[]="Selam dunya ";
    char zehra[]="benim adim nammmeee\n";

    printf(strncat(rahmet,zehra,8));
    */



    //gets() ve fgets() kullanımı:


    /*
    char name[30];
    printf("lutfen isminizi giriniz\n");
   // gets(name); // güvenlik nedeniyle bu çok kullanılmıyomuş

    fgets(name,sizeof(name),stdin); // bu kullanım öneriliyo

    printf("%s",name);
*/



    /*
    //strrev() kullanımı:
    //ters çevirmek

    char rahmet[100];
    printf("lutfen bir text giriniz\n");
    scanf("%s",&rahmet);
    printf("%s\n",rahmet); // düz hali

    printf(strrev(rahmet)); // ters hali
    */


    /*
    //strlwr() kullanımı:
    //girilen harflerin hepsini kucuk harf yapmaya yarar

    char rahmet[100]={"SELAM DUNYA BEN BELANİN TA KENDİSİ\n"};
    printf(strlwr(rahmet));
    */



    /*
    //strupr() kullanımı:
    //yüm harfleri büyütme

    char rahmet[100]={"selam dunya ben belanin ta kendisi\n"};
    printf(strupr(rahmet));
    */


    /*
    //strstr() kullanımı:
    //arama kelimesini alıyo ve gerisini yazdırıyo
    //yani arama motoru gibi şey

    char rahmet[100]="C dilinin ogreniyoruz";
    char *sub;
    sub=strstr(rahmet,"dil");
    printf("\nArama sonrasi yeni string: %s",sub);
    */













    return 0;
}
