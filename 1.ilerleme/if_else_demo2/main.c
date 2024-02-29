#include <stdio.h>
#include <stdlib.h>

int main()
{

    // kullanýcýdan bir sayi girmesini isteyiniz if else kullanarak sayinin tek mi
    // cift mi oldugunu ekrana bastiriniz.


    int num;
    printf("bir sayi giriniz:");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("Girdiginiz sayi cifttir : %d",num);
    }

    else
    {
            printf("Girdiginiz sayi tekttir : %d",num);
    }





    return 0;
}
