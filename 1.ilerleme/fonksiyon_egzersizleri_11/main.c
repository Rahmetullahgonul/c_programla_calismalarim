#include <stdio.h>
#include <stdlib.h>

void fibonnaci(int sayi)
{
    int i;
    int a,b=1;
    int sonuc=0;

    printf("0 ");
    for(i=0;i<=sayi-1;i++)
    {
        a=b;
        b=sonuc;
        sonuc=a+b;
        printf("%d ",sonuc);
    }
}


int main()
{

/* soru:
her say�n�n kendinden �nceki say� ile toplanmas� sonucu olu�an say� dizisine fibonacci
dizisi ad� verilmektedir buna g�re klavyeden ka� adet fibonacci say�s� �retilece�ini
s�yleyen ve ekrana bast�ran program� yaz�n
*/


    int num;
    printf("kac adet fibonacci sayisi uretmek istersiniz : \n");
    scanf("%d",&num);

    fibonnaci(num);





    return 0;
}
