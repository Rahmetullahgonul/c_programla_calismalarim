#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{


    /* soru:
    ** galerinin sahibi icin araba adli bir yapi tipi tanimlayiniz bu yapidaki ilk
    eleman arabanin satilip satilmadigini tutmalidir eger araba satildiysa 1 degerini
    satilmadiysa 0 degerini alacaktir ikinci eleman ise birlesim tipinde tanimlanmali
    ve eger araba satildiysa satis degeri, satilmadiysa arabanin markasini tutmalidir
    ** araba_A degiskenini araba yapi tipinde tanimlamalidir
    ** arana_A degiskeni satilmamis olan "anadol" marka arabanin bilgilerini atayin
    ** anadol marka araba 20000 tl ye satilinca araba_A degiskeninde gereken
    guncellemeyi yapin
    */

    struct araba
    {
        int satis;

        union
        {
            double fiyat;
            char marka[20];
        } bilgi;
    };

    struct araba araba_A;

    araba_A.satis=0;
    strcpy(araba_A.bilgi.marka,"Anadol");


    araba_A.satis=1;
    araba_A.bilgi.fiyat=20000;
















    return 0;
}
