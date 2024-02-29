#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* soru:
    klavyeden girilen bir kelimenin pallindrom(tersten okundugu zaman da ayný olan
    kelimeler 'kabak' gibi) olup olmadigini kontrol edin
    */


    char kelime[100];
    char *p1,*p2;


    printf("lutfen bir kelime giriniz : \n");
    gets(kelime);

    for(p2=kelime;*p2;p2++)
    {

    }

    p2=p2-1;
    int sonuc;

    for(p1=kelime;p1<p2;p1++,p2--)
    {
        if(*p1!=*p2)
        {
            sonuc=0;
        }
        else if(*p1==*p2)
        {
            sonuc=1;
        }
    }
    if(sonuc==0)
    {
        printf("%s : kelimesi bir pallindrom degildir \n",kelime);
    }
    else if(sonuc==1)
    {
        printf("%s : kelimesi bir pallindromdur \n",kelime);
    }
    return 0;
}
