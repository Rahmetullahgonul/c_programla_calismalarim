#include <stdio.h>
#include <stdlib.h>


    int us(int num1, int num2)
    {
        int i;
        int result=1;
        for(i=1;i<=num2;i++)
        {
            result=result*num1;
        }
    return result;
    }



int main()
{

    /* soru:
    klavyeden taban ve �s de�erini a^b �eklindeki bir i�lemin sonucunu fonksiyon
    kullanarak hesaplayan ve ekrana basan program� yaz�n
    */



    int num1,num2;
    printf("lutfen taban degerini girin : \n");
    scanf("%d",&num1);
    printf("lutfen us degerini girin : \n");
    scanf("%d",&num2);

   printf("%d ^ %d = %d",num1,num2,us(num1,num2));
























    return 0;
}
