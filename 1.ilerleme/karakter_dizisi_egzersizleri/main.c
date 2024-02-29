#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    /* soru 1:
    klavyeden girilen bir cümledeki kelime sayýsýný bulan c programýný yazýnýz
    */


/*
    // çözümü:

    int i=0;
    int sayac=0;
    char cumle[100];


    printf("lutfen bir cumle giriniz :\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
        i++;
    }

    printf("girdiginiz cumlede %d kadar kelime bulunur\n",sayac+1);
*/


//---------------------------------------------------------------------------------



    /* soru 2:
    klavyeden girilen bir cümledenin kaç karakterden olustugunu strlen()fonksiyonunu
    kullanmadan bulan c programýný yazýnýz
*/




/*
    //strlen() ile çözümü:
    //string kutuphanesini include etmemiz lazim


    char cumle[100];
    printf("lutfen harf sayisini saydirmak istediginiz cumleyi girin \n");
    gets(cumle);

    int sonuc;

    sonuc = strlen(cumle);
    printf("girdiginiz cumledeki harf sayisi = %d",sonuc);
*/



/*
    // düz çözümü:

    char cumle[100];
    printf("lutfen harf sayisini saydirmak istediginiz cumleyi girin \n");
    gets(cumle);

    int i=0;
    int sayac=0;

    while(cumle[i])
    {
        sayac++;
        i++;
        if(cumle[i]==32) // burda bosluk karakteri gelince harf olarak saymayacak
        {
            sayac--;
        }
    }
    printf("cumledeki harf sayisi = %d",sayac);
*/


//-----------------------------------------------------------------------------------



    /* soru 3:
    klavyeden girilen bir cumlenin harflerinin alt alta yazdýrýlmasýný saðlayýn
    */



/*
    // çözümü 1 (while döngüsü ile):

    char cumle[100];
    printf("lutfen bir cumle giriniz : \n");
    gets(cumle);


    int i=0;

    while(cumle[i])
    {
        printf("%c \n",cumle[i]);
        i++;
    }
*/


/*
 // çözümü 2 (for döngüsü ile):

    char cumle[100];
    printf("lutfen bir cumle giriniz : \n");
    gets(cumle);

    int i;


    for(i=0;cumle[i];i++)
    {
        printf("%c \n",cumle[i]);
    }
*/



//----------------------------------------------------------------------------------


    /*srou4:
    klavyeden girilen bir kelimenin harflerini bir harf arttýrarak aþaðýdaki gibi
    yazan programý yazýn

    kelime giriniz : canan
    c
    c a
    c a n
    c a n a
    c a n a n
*/


/*
    //çözümü:


    char kelime[100];
    printf("lutfen bir kelime giriniz \n");
    gets(kelime);

    int i=0;
    int j=0;

    while(i<strlen(kelime))
    {
        j=0;
        while(j<=i)
        {
            printf("%c",kelime[j]);
            j++;
        }
        printf("\n");
        i++;
    }
*/

//------------------------------------------------------------------------------



    /* soru 5:
    klavyeden küçük harflerle girilen bir cümle içerisinde en fazla kullanılan
    karakteri bulduran programı yazırınız
    */



    /*
    //çözümü:

    char cumle[100];
    int kucukharf[26]={0};
    int i=0;
    int encok;
    char harf;

    printf("lutfen bir cumle giriniz \n");
    gets(cumle);



    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }


    encok=kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i]!=0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i + 'a';
            }
        }
    }
    printf("en fazla kullanilan harf : %c",harf);
*/



//----------------------------------------------------------------------------------

























    return 0;
}
