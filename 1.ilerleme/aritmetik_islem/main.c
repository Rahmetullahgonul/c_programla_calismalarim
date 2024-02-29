#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru1:
    kullanýcýdan girmesini istediði a,b,c ve x deðerlerini kullanarak
    a*x*x + b*x + c iþlemini hesaplatýn
    */


    /*
    // çözüm

    int result;
    int a,b,c,x;

    printf("lutfen islemde kullanmak icin a,b,c ve x degerlerini giriniz\n");
    scanf("%d %d %d %d",&a ,&b ,&c ,&x);

    result = (a*x*x)+(b*x)+c;
    printf("islemin sonucu : %d\n",result);
*/



    /* soru2:
    kullanýcýdan alýðý tam sayý kenar uzunluklarý(a,b) ve yükselik(h) bilgisini
    kullanarak bir dikdörtgen prizmanýn sýrasýyla taban alaný, yanal alanlarýnýn
    toplamýný, toplam alaný ve hacmini ekrana bastýrýn
    * taban alaný = a*b
    * yanal alanlarý = (2*h*a)+(2*h*b)
    * toplam alaný = (2*h*a)+(2*h*b)+(2*a*b)
    * hacmi =a*b*h
*/



    /*
    // çözümü:

    int a,b,h;

    printf("lutfen dikdortgen pirizmanýn a,b ve h degerini giriniz :\n");
    scanf("%d %d %d",&a,&b,&h);

    printf("girdiginiz bilgilere gore taban alan : %d \n",a*b);
    printf("girdiginiz bilgilere gore yanal alanlarin toplami : %d \n",(2*h*a)+(2*h*b));
    printf("girdiginiz bilgilere gore toplam alan : %d \n",(2*h*a)+(2*h*b)+(2*a*b));
    printf("girdiginiz bilgilere gore hacim : %d \n",a*b*h);
*/





    /* soru 3:
    kullanýcýdan 3 farklý tam sayý girmesini isteyin ve ekrana en küçük ve en büyük
    sayýyý bastýrýn
    */


    /*
    //çözümü:

    int num1,num2,num3;

    printf("kiyaslamak istediginiz 3 adet sayiyi giriniz \n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if((num1>num2 && num1>num3)&&(num2<num3))
    {
        printf("en buyuk sayi : %d \n",num1);
        printf("en kucuk sayi : %d \n",num2);
    }
    else if((num1>num2 && num1>num3)&&(num3<num2))
    {
        printf("en buyuk sayi : %d \n",num1);
        printf("en kucuk sayi : %d \n",num3);
    }
    else if((num2>num1 && num2>num3)&&(num1<num3))
    {
        printf("en buyuk sayi : %d \n",num2);
        printf("en kucuk sayi : %d \n",num1);
    }
    else if((num2>num1 && num2>num3)&&(num3<num1))
    {
        printf("en buyuk sayi : %d \n",num2);
        printf("en kucuk sayi : %d \n",num3);
    }
    else if((num3>num1 && num3>num2)&&(num1<num2))
    {
        printf("en buyuk sayi : %d \n",num3);
        printf("en kucuk sayi : %d \n",num1);
    }
    else if((num3>num1 && num3>num2)&&(num2<num1))
    {
        printf("en buyuk sayi : %d \n",num3);
        printf("en kucuk sayi : %d \n",num2);
    }
    else{
        printf("girilen degerlerde bi hata olustu\n");
    }
*/





    /* soru 4:
    kullanýcýdan girdiði 2 tam sayýdan ilkinin ikincisi ile karþýlaþtýrýp eþit
    olup olmadýðýný eðer eþit deðilse hangisinin büyük olduðunu ekrana yazýn
    */



/*
    //çözümü:

    int a,b;
    printf("iki adet sayi giriniz \n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("%d degeri %d degerinden buyuktur \n",a,b);
    }
    else if(b>a)
    {
        printf("%d degeri %d degerinden buyuktur \n",b,a);
    }
    else{
        printf("%d degeri %d degerine esittir \n",a,b);
    }
*/



    /* soru 5:
    yukardaki soruyu birinci sayi ikinci sayinin katý olup olmadýgýný hesaplayan
    kodla deðiþtirin
    */



    /*
    // çözümü:

    int a,b;
    printf("iki adet sayi giriniz \n");
    scanf("%d %d",&a,&b);

    if(a%b==0)
    {
        printf("%d sayisi %d sayisinin bir katidir \n",a,b);
    }
    else{
        printf("%d sayisi %d sayisinin bi kati degildir \n",a,b);
    }
*/




    /*soru6:
    bir arabanın gittiği yolu mil cinsinden girdi olarak alan ve bunu kmye çeviren
    bir program yazın(1 mil =1.609km)
    */



    /*
    //çözümü:

    float yol;
    printf("gittiginiz yolu mil cinsinden giriniz : \n");
    scanf("%f",&yol);

    printf("%.2f km kadar yol yapmissiniz \n",yol*1.609);
    */





    /* soru7:
    kullanıcıdan aldıgınız dairenin yariçapıyla dairenin alanını hesaplayıp ekrana
    basın
    */



    /*
    //çözüm:

    float yaricap;

    printf("lutfen dairenin yaricapini giriniz : \n");
    scanf("%f",&yaricap);

    printf("dairenin alani = %.2f",yaricap*yaricap*3.141);
*/






    /* soru8:
    a ve b değişkenlerine iki tam sayıyı girdi olarak alan ve yerlerini değiştiren
    bi program yazdırın
    */



    /*
    //çözümü:

    int ahmet=1968;
    int zehra=1975;
    int degisken1=1;
    int degisken2=1;


    degisken1 = ahmet;
    degisken2=zehra;
    zehra = degisken1;
    ahmet = degisken2;

    printf("zehranin yeni dogum tarihi : %d\n",zehra);
    printf("ahmetin yeni dogum tarihi : %d",ahmet);
    */




    /*soru9:
    bir öğrenci evinde öğrenciler salonu halıyla kaplamak istemektedir döşenecek
    halının metrekaresi 40 tldir ayrıca halıcı salon döşemek için 200 tl işçilik
    parası almaktadır buna göre metrekareyi girdi olarak alan ve tüm masrafları da
    dahil eden programı yazın
    */


/*
    //çözüm:

    float metrekare;
    printf("lutfen hali ile kaplanacak alanin metrekaresini giriniz :\n");
    scanf("%f",&metrekare);

    printf("toplam odemeniz gereken butce = %.2f",40*metrekare+200);
*/




    /*soru 10:
    bir halıcı çocuklar için 3 ayri halı satmaktadır bu halıların tipi kodu ve
    metrekare birim fiyatı aşağıdaki gibidir;

    hali tipi       kodu        metrekare fiyat

    twetty          T           18tl
    bugs            B           17tl
    spiderman       S           19tl

    sipariş alınan halı tipi ve döşenecek alanın metrekaresi girildiğinde
    ödenmesi gereken ücreti yazdırın
    */



    /*
    //çözümü:

    float metrekare;
    char tip;

    printf("lutfen almak istediginiz hali tipinin kodunu giriniz :\n");
    scanf("%c",&tip);

    printf("lutfen dosenecek olan alani giriniz : \n");
    scanf("%f",&metrekare);

    if(tip=='T')
    {
        printf("toplam ucret = %.2f",18*metrekare);
    }
    else if(tip=='B')
    {
        printf("toplam ucret = %.2f",17*metrekare);
    }
    else if(tip=='S')
    {
        printf("toplam ucret = %.2f",19*metrekare);
    }
    else{
        printf("girilen bilgilerde bi hata olustu");
    }
*/



    /*soru 11:
    kullanıcıdan pozitif bir tam sayıyı girdi olarak alıp bu sayının 13 ve/veya 17 ye
    bölünüp bölünmediğini bularak bu durumu mesaj ile yazdırın
    */



    /*
    // çözümü:

    int sayi;
    printf("lutfen isleme sokmak istediginiz degeri girin : \n");
    scanf("%d",&sayi);

    if(sayi%13==0)
    {
        if(sayi%17==0)
        {
            printf("girdiginiz %d degeri 13 ve 17'nin tam katidir.",sayi);
        }
        else{
            printf("girdiginiz %d degeri sadece 13'un tam katidir.",sayi);
        }
    }
    else if(sayi%17==0)
    {
        printf("girdiginiz %d degeri sadece 17'nin tam katidir.",sayi);
    }
    else if((sayi%17!=0)&&(sayi%13!=0))
    {
        printf("girdiginiz %d degeri 13 ve 17'nin bir kati degildir ",sayi);
    }
    else{
        printf("girdiginiz degerlerde bi hata meydana geldi");
    }
*/





    /*soru 12:
    kullanıcıdan alınan 3 sayinin ortalamasını ekrana basın
    */



    /*
    //çözümü:

    float num1,num2,num3;
    printf("lutfen 3 adet sayi girin \n");
    scanf("%f %f %f",&num1,&num2,&num3);

    printf("girdiginiz %.2f, %.2f, %.2f sayilarini ortalamasi : %.2f",num1,num2,num3
           ,(num1+num2+num3)/3);
*/




    /*soru 13:
    tek haneli 3 sayı olan x,y ve z yi girdi olarak alın yüzler basamağına x
    onlar basamağına y ve birler basamğına z yi koyup ekrana basın
    */



    /*
    //çözümü:
    int x,y,z;
    printf("lutfen 3 adet tek basamakli sayi giriniz (x'e 0 degeri vermeyiniz)\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("olusturulan 3 basamakli sayi = %d%d%d",x,y,z);
*/




    /* soru 14:
    bir arabanın ankaradan istanbula(450km) varış ve kalkış zamanını saat cinsinden
    girdi olarak alın ve arabanın ortalama hızını hesaplayın
    */


    /*
    //çözümü:

    float kalkis;
    float varis;
    float sure;
    printf("lutfen yola cikis ve varis saatinizi girin : \n");
    scanf("%f %f",&kalkis,&varis);
    sure = varis - kalkis;

    printf("ortalama hiziniz = %.2f",450/sure);
*/




    /* soru 15:
    **kullanıcıdan büyük harf tipinde bir karakter girmesini isteyin
    **eğer girdiği karakter büyük harf ise o harfi küçük harf olarak bastırın
    **eğer girdiği karakter küçük harfse ekrana hata mesajı yazın
    */



    /*
    //çözümü:

    char harf;
    printf("lutfen buyuk bir harf giriniz \n");
    scanf("%c",&harf);

    if((harf>='A')&&(harf<='Z'))
    {
        printf("girdiginiz harfin kucuk hali : %c",tolower(harf));
    }
    else if((harf>='a')&&(harf<='z'))
    {
        printf("girdiginiz %c kucuk bir harfdir ",harf);
    }
    else{
        printf("girdiginiz degerde bir hata bulunmaktadir");
    }
*/




    /* soru 16:
    kullanıcıdan bir n degeri alin
    1+1/2+1/3+1/.......1/n degerini hesaplayin
    */



    /*
    //çözümü:

    int n;
    int i;
    float sonuc;

    printf("lutfen n degerini giriniz \n");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sonuc +=(float)1/i;

    }
    printf("girdiginiz degere gore islemin sonucu = %f\n",sonuc);
*/












    return 0;
}
