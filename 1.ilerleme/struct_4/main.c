#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*
    ** bir ogrencinin okul numarasi adi soyadi ve yas bilgilerini tutan
    ogrenci_bilgi adli bir yapi tanimlayiniz
    ** ogrenci_1 ve ogrenci_2 degiskenlerini ogrenci bilgi yapi tipinde tanimlayiniz
    ** asagidaki ogrenci bilgilerini ogrenci_1 degiskenine atin
    okul no:552
    ad:can
    soyad:boz
    yas:18
    **ogrenci_1 degiskenini ogrenci_2 ye kopyalayiniz
    */


    struct ogrenci_bilgi
    {
        int okul_no;
        char isim[15];
        char soyad[15];
        int yas;
    };

    struct ogrenci_bilgi ogrenci_1;
    struct ogrenci_bilgi ogrenci_2;

    ogrenci_1.okul_no=552;
    strcpy(ogrenci_1.isim,"Can");
    strcpy(ogrenci_1.soyad,"Boz");
    ogrenci_1.yas=18;

    printf("ogrenci_1 'in bilgileri : \n %d %s %s %d \n",ogrenci_1.okul_no,ogrenci_1.isim,ogrenci_1.soyad,ogrenci_1.yas);


    ogrenci_2=ogrenci_1;
    printf("ogrenci_2 'in bilgileri : \n %d %s %s %d \n",ogrenci_2.okul_no,ogrenci_2.isim,ogrenci_2.soyad,ogrenci_2.yas);










    return 0;
}
