#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int x, int y)
{
    int gecici;
    gecici=x;
    x=y;
    y=gecici;

    printf("x'in yeni degeri = %d \n",x);
    printf("Y'nin yeni degeri = %d",y);

}

int main()
{
    /*soru:
    kullan�c� taraf�ndan girilen tamsay�lar� x ve y degiskenlerinde tutulmaktad�r
    x ve y degiskenlerinde yer alan degerlerin yerlerinin degistirilmesini saglayan
    fonksiyonun prototipi asag�da verilmistir

    void yerdegistir(int x,int y);
    */
    int x;
    int y;
    printf("lutfen x ve ye degerlerini giriniz : \n");
    scanf("%d %d",&x,&y);
    printf("x:%d  y:%d\n",x,y);
    yerdegistir(x,y);



    return 0;
}
