#include <stdio.h>
#include <stdlib.h>



void islem(float num1, float num2,char secenek)
{
    switch(secenek){
    case '+':printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
    break;
    case '-':printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
    break;
    case '*':printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
    break;
    case '/':printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
    break;
    case '5':printf("cikiliyor");
    break;
    default: printf("hatali giris yapildi");
    break;
    }
    return;
}





int main()
{

 /* klavyeden girilen iki tam sayinin toplamini farkini carpmini ve bolumunu bulan
 kodu hem fonksiyonla hem de fonksiyonsuz yazin.*/

/*
 // normal hali

printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
 printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
 printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
 printf("%.2f * %.2f = %.2f\n",num1,num2,num1*num2);
 printf("%.2f / %.2f = %.2f\n",num1,num2,num1/num2);
*/


    float num1,num2;
    printf("enter two numbers:");scanf("%f%f",&num1,&num2);
    printf("+.toplama\n-.cikarma\n*.carpma\n/.bolme\n5.cikis\n");
    char sec;
    printf("lutfen yaptirmak istediginiz islemi secin:");scanf(" %c",&sec);

    islem(num1,num2,sec);


    return 0;
}
