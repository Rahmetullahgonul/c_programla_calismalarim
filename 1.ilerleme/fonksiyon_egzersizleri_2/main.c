#include <stdio.h>
#include <stdlib.h>



    void dortislem(int num1, int num2, char islem)
    {
        switch(islem)
        {
        case '+':
            printf("%d + %d = %d \n",num1 ,num2 ,num1+num2);
            break;
        case '-':

            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d / %d = %d",num1,num2,num1/num2);
            break;
        default:
            printf("girilen degerlerde yanlislik var");
        }

    }




int main()
{
    /* soru :
    klavyeden girilen iki tamsayýnýn toplamýný,farkýný,çarpýmýný ve bölümünü
    gerçekleþtiren programý fonksiyon kullanarak yazi
    */

    char islem;
    printf("hangi islemi yaptirmak istiyosunuz (+ - * /): \n");
    scanf("%c",&islem);



    int num1,num2;
    printf("lutfen islemlere sokmak istediginiz iki adet tamsayi giriniz : \n");
    scanf("%d %d",&num1,&num2);


    dortislem(num1,num2,islem);

    return 0;
}
