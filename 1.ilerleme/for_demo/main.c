#include <stdio.h>
#include <stdlib.h>

int main()
{
 //kullanýcýdan bir deðer girmesinin isteyiniz 1 den gireceðiniz sayýya kadar olan
 //sayýlarýn toplamýný for döngüsüyle hesaplayýnýz

    int i;
    int num = 1;
    int result = 0;
    printf("lutfen bir deger giriniz""\n");
    scanf("%d",&i);

    for(num;num<=i;num++)
    {
       result = result + num;
    }

    printf("%d",result);





































    return 0;
}
