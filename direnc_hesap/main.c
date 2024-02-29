#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    int renk1,renk2,renk3;
    printf("direnc uzerindeki ilk rengi lutfen giriniz.\n0-siyah\n1-kahverengi\n2-kirmizi\n3-turuncu\n4-sari\n5-yesil\n6-mavi\n7-mor\n8-gri\n9-beyaz\n===>");
    scanf("%d",&renk1);
    printf("direnc uzerindeki ikinci rengi lutfen giriniz.\n0-siyah\n1-kahverengi\n2-kirmizi\n3-turuncu\n4-sari\n5-yesil\n6-mavi\n7-mor\n8-gri\n9-beyaz\n===>");
    scanf("%d",&renk2);
    printf("direnc uzerindeki ucuncu rengi lutfen giriniz.\n0-siyah\n1-kahverengi\n2-kirmizi\n3-turuncu\n4-sari\n5-yesil\n6-mavi\n7-mor\n8-gri\n9-beyaz\n===>");
    scanf("%d",&renk3);
    int ilk_sayi,ikinci_sayi,carpan;

    switch(renk1)
    {
        case 0:printf("ilk renginiz siyah\n");
        ilk_sayi=0;
        break;
        case 1:printf("ilk renginiz kahverengi\n");
        ilk_sayi=1;
        break;
        case 2:printf("ilk renginiz kirmizi\n");
        ilk_sayi=2;
        break;
        case 3:printf("ilk renginiz turuncu\n");
        ilk_sayi=3;
        break;
        case 4:printf("ilk renginiz sari\n");
        ilk_sayi=4;
        break;
        case 5:printf("ilk renginiz yesil\n");
        ilk_sayi=5;
        break;
        case 6:printf("ilk renginiz mavi\n");
        ilk_sayi=6;
        break;
        case 7:printf("ilk renginiz mor\n");
        ilk_sayi=7;
        break;
        case 8:printf("ilk renginiz gri\n");
        ilk_sayi=8;
        break;
        case 9:printf("ilk renginiz beyaz\n");
        ilk_sayi=9;
        break;
        default:printf("girdiginiz deger hatalidir\n");
        break;
    }

    switch(renk2)
    {
        case 0:printf("ikinci renginiz siyah\n");
        ikinci_sayi=0;
        break;
        case 1:printf("ikinci renginiz kahverengi\n");
        ikinci_sayi=1;
        break;
        case 2:printf("ikinci renginiz kirmizi\n");
        ikinci_sayi=2;
        break;
        case 3:printf("ikinci renginiz turuncu\n");
        ikinci_sayi=3;
        break;
        case 4:printf("ikinci renginiz sari\n");
        ikinci_sayi=4;
        break;
        case 5:printf("ikinci renginiz yesil\n");
        ikinci_sayi=5;
        break;
        case 6:printf("ikinci renginiz mavi\n");
        ikinci_sayi=6;
        break;
        case 7:printf("ikinci renginiz mor\n");
        ikinci_sayi=7;
        break;
        case 8:printf("ikinci renginiz gri\n");
        ikinci_sayi=8;
        break;
        case 9:printf("ikinci renginiz beyaz\n");
        ikinci_sayi=9;
        break;
        default:printf("girdiginiz deger hatalidir\n");
        break;
    }


        switch(renk3)
    {
        case 0:printf("ucuncu renginiz siyah\n");
        carpan=0;
        break;
        case 1:printf("ucuncu renginiz kahverengi\n");
        carpan=1;
        break;
        case 2:printf("ucuncu renginiz kirmizi\n");
        carpan=2;
        break;
        case 3:printf("ucuncu renginiz turuncu\n");
        carpan=3;
        break;
        case 4:printf("ucuncu renginiz sari\n");
        carpan=4;
        break;
        case 5:printf("ucuncu renginiz yesil\n");
        carpan=5;
        break;
        case 6:printf("ucuncu renginiz mavi\n");
        carpan=6;
        break;
        case 7:printf("ucuncu renginiz mor\n");
        carpan=7;
        break;
        case 8:printf("ucuncu renginiz gri\n");
        carpan=8;
        break;
        case 9:printf("ucuncu renginiz beyaz\n");
        carpan=9;
        break;
        default:printf("girdiginiz deger hatalidir\n");
        break;
    }


    int direnc_deger,us;
    us=pow(10,carpan);
    direnc_deger=((ilk_sayi*10+ikinci_sayi)*us);
    printf("girdiginiz direncin degeri %d ohm\n",direnc_deger);


    return 0;
}
