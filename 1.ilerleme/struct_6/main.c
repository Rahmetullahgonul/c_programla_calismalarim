#include <stdio.h>
#include <stdlib.h>


struct nokta
{
    char isim[10];
    float x_ekseni;
    float y_ekseni;
};

void ekrana_bastir(struct nokta p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s = (%.2f %.2f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
    }
}


int main()
{

    /* soru :
    ** 5.egzersizdeki struct yapisini kullanarak 5 tane nokta tutan bir dizi olusturun
    ** her noktaya bir isim ekleyin ve her noktanin atamasini tanýmlarken yapin
    ** fonksiyon yardimiyla ekrana basin
*/

    struct nokta can[5]={{"1.nokta",1,1},{"2.nokta",2,2},{"3.nokta",3,3},{"4.nokta",4,4},{"5.nokta",5,5}};

    ekrana_bastir(can,5);

    return 0;
}
