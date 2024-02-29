#include <stdio.h>
#include <stdlib.h>

int main()
{
    //switch case kullanarak dort islem yaptirma


    char op;
    printf("lutfen operator giriniz\n");
    scanf("%c",&op);

    float num1;
    printf("lutfen birinci sayiyi giriniz\n");
    scanf("%f",&num1);
    float num2;
    printf("lutfen ikinci sayiyi giriniz\n");
    scanf("%f",&num2);

    switch(op)
    {
        // .3f dememin sebebi virgülden sonra 3 basamak görmek istemem.
        case '+' : printf("%.3f + %.3f = %.3f",num1,num2,num1+num2);
        break;
        case '-' : printf("%.3f - %.3f = %.3f",num1,num2,num1-num2);
        break;
        case '*' : printf("%.3f * %.3f = %.3f",num1,num2,num1*num2);
        break;
        case '/' : printf("%.3f / %.3f = %.3f",num1,num2,num1/num2);
        break;
        default:printf("girilen degerlerde hata var");
        break;
    }





















    return 0;
}
