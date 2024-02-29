#include <stdio.h>
#include <stdlib.h>

int main()
{
            // 07.03.2023
//    --------------------------------------------------------------------
   /* // EKRANA TEXT BASTÝRMA
    printf("I'll learn c programing\nI'll pass the exam\n");*/


//    --------------------------------------------------------------------

    /* DATA TYPES:
    int =>  4 byte tam sayilari tutar

    float => 4 byte orta buyuklukte sayilar

    double => 8 byte cok buyuk sayilari tutabilir

    char => 1 byte karakterleri tutar
*/
   /*
    int x =10;
    float y=12.21;
    double z=21424.532;
    char r='r';

    printf("%d int sayimiz \n",x);
    printf("%f float sayimiz \n",y);
    printf("%lf double sayimiz \n",z);
    printf("%c char karakterimiz \n",r);
*/

/*
    float number = 123.456;
    printf("%.5f",number); // noktadan sonra kac basamk yazdiricagiz?
*/


//    --------------------------------------------------------------------

   /* kullanicidan 2 adet sayi ve isiminin bas harfini aliniz ilk sayim bu
    2.sayim bu ismimin bas harfi bu sekilde ekrana basin*/

/*
    int num1,num2;
    char harf;
    printf("lutfen isminin bas harfini gir:\n");
    scanf("%c",&harf);
    printf("lutfen 2 adet sayi gir:\n");
    scanf("%d %d",&num1,&num2);

    printf("1.sayim = %d\n2.sayim = %d\nismimin bas harfi = %c",num1,num2,harf);
*/

//    --------------------------------------------------------------------
    // SIZEOF
    // ne kadar yer tutuyo?
/*
    double rahmet=201;
    printf("rahmet sayisi hafizada %d kadar yer tutar\n",sizeof(rahmet));
    printf("int hafizada %d kadar yer tutar\n",sizeof(int));
    printf("float hafizada %d kadar yer tutar\n",sizeof(float));
    printf("double hafizada %d kadar yer tutar\n",sizeof(double));
    printf("char hafizada %d kadar yer tutar\n",sizeof(char));
*/


//    --------------------------------------------------------------------

    // CONST VE DEFÝNE

    /* const bir degeri tamamen sabitlemek icin kullanilir ve degistirilemez
       define ise her yerde ayni deger gecerliyse mainin disinda tanimlamaktir
    */

//    --------------------------------------------------------------------

    /* kullanicidan 3 adet sayi alip en buyuk sayiyi bastir*/

/*
    int num1,num2,num3;
    printf("lutfen 3 adet sayi giriniz:\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("en buyuk sayi %d",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("en buyuk sayi %d",num2);
    }
    else
    {
        printf("en buyuk sayi %d",num3);
    }
*/


//    --------------------------------------------------------------------

    // tek cift sayi bulma
/*
    int num;
    printf("bi sayi giriniz:\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d sayisi cifttir ",num);
    }
    else
    {
        printf("%d sayisi tektir",num);
    }
*/

//    --------------------------------------------------------------------

//fordan devam et

    int number;
    char karakter;
     printf("karakter:\n");
    scanf("%c",karakter);
    printf("sayi:\n");
    scanf("%d",number);





    return 0;
}
