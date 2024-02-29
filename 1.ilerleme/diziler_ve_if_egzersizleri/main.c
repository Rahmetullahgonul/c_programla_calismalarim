#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru 1:
    bir pozitif tamsayý olan n degeri ile bir reel sayi olan x deðerini gird olarak alan
    1/x^2 + 3/x^4 + 5/x^6 + ........ 2n-1/x^2n
    serisini hesaplayan programý yazýn
    */


/*
    //çözümü:

    float x;
    float seri;
    int i,n;


    printf("pozitif sayi giriniz : \n");
    scanf("%d",&n);

    printf("reel sayi : \n");
    scanf("%f",&x);


    for(i=1;i<=2*n-1;i+=2)
    {
        seri +=i/pow(x,i+1);
    }

    printf("seri = %f",seri);
*/


//--------------------------------------------------------------------------


    /* soru 2:
    bir çiftlikte tavşanların sayısı 1042 iken kuşların sayısı 2272 dir bir yılda
    tavşanlar %3.8 oranında çoğalırken kuşlar %1.2 oranında çoğalmaktadır tavşanların
    sayısı kuşların sayısını kaç yıl sonra geçeceğini bulan programı yazın
    */


/*
    //çözüm:

    float tavsan=1042;
    float kus=2272;
    float yil=0;

    int i;

    while(tavsan <=kus)
    {
        tavsan = tavsan + (3.8/100)*tavsan;
        kus = kus + (1.2/100)*kus;
        yil = yil + 1;
        printf("%.0f.yil tavsan sayisi = %.0f, kus sayisi = %.0f \n",yil,tavsan,kus);
        if(tavsan >= kus)
        {
            printf("\n");
            printf("tavsanlarin sayisi kuslarin sayisini %.1f yilda gececek ",yil);
        }
    }
*/



//----------------------------------------------------------------------------------



    /*soru 3:
    ** 3 adet temel ürünümüz var : kitap,temel gida ve lüks
    ** devlet her üç gruba farklı oranlarda vergi uyguluyor. kitap için %4
    temel gıda ıcın %5.6 luks urun gammı için %19.6
    **her urunun bır kodu var kıtabın kodu 0 temel gıdanın kodu 1 luks urunun kodu 2
    ** kullanıcıdan ıstedıgınız urunun kodunu ve fıyatını isteyen daha sonra switch
    case yapısını kullanarak son fıyatı ekrana bastıran programı yazın
    ** aynı programı sonrasında if else ile yazınız
    */



    /*
    // çözümü 1(switc-case ile):

    int kod;
    float fiyat;

    printf("lutfen vergisini hesaplatmak istediginiz urunun kodunu ve fiyatini giriniz : \n");
    scanf("%d %f",&kod,&fiyat);

    switch(kod)
    {
    case 0:
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(4.0/100));
        break;
    case 1:
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(5.6/100));
        break;
    case 2:
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(19.6/100));
        break;
    default :
        printf("hatali bir kod numarasi girdiniz");
    }
*/


/*
    //çözüm 2(if/else ile):


    int kod;
    float fiyat;

    printf("lutfen vergisini hesaplatmak istediginiz urunun kodunu ve fiyatini giriniz : \n");
    scanf("%d %f",&kod,&fiyat);


    if(kod==0)
    {
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(4.0/100));
    }
    else if(kod==1)
    {
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(5.6/100));
    }
    else if(kod==2)
    {
        printf("odemeniz gereken ucret = %.2f",fiyat+fiyat*(19.6/100));
    }
    else{
        printf("bilinmeyen bir kod degeri girdiniz ");
    }
*/



//---------------------------------------------------------------------------------









    return 0;
}
