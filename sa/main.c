#include <stdio.h>
#include <stdlib.h>

int main() {

    int sayi,tut;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    tut=sayi;
    int denet=0,i=1;
    while(sayi>=1)
    {
        if(sayi%i==0)
        {
            denet+=1;
        }
        sayi--;
        i++;
    }
    if(sayi==1)
    {
        printf("1 sayisi asal degildir");
    }
    else if(denet>2)
    {
        printf("%d sayisi asal degildir",tut);
    }

    else{printf("%d sayisi asaldir",tut);}


    return 0;

}
