#include <stdio.h>
#include <stdlib.h>

int main()
{




    //kullanicidan iki adet sayi aliniz ve buyukluk kucukluk durumuna gore ekrana bas�n�z


    // normal yaz�m�:

    /*
    int num1;
    int num2;
    printf("ilk sayi : ""\n");
    scanf("%d",&num1);
    printf("ikinci sayi : ""\n");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("girilen %d sayisi %d sayisindan buyuktur",num1,num2);
    }

    else if(num2>num1)
    {
        printf("girilen %d sayisi %d sayisindan buyuktur",num2,num1);
    }

    else{
        printf("girilen sayilar esittir");
    }

    */

    //i� i�e ifte:


    int num1;
    int num2;
    printf("ilk sayi : ""\n");
    scanf("%d",&num1);
    printf("ikinci sayi : ""\n");
    scanf("%d",&num2);

    if(num1>=num2)
    {
        if(num1>num2)
        {
            printf("girilen %d sayisi %d sayisindan buyuktur",num1,num2);
        }
        else
            printf("girilen sayilar birbirine esittir");
    }

    else
    {
       printf("girilen %d sayisi %d sayisindan buyuktur",num2,num1);
    }













    return 0;
}
