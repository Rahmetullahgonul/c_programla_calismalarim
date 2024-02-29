#include <stdio.h>
#include <stdlib.h>

void bastir(int *arr, int N)
{
    for(int i=0; i<N; i++)
    {
        printf("%d \n",*arr);
        arr++;
    }

}




int main()
{


    /* kullanýcýdan dizi eleman sayisini belirlemesini isteyin dizinin elemanlarini
    girdikten sonra pointer yardimiyla yeni bir diziye ilk dizinin elemanlarini
    kopyalayip her iki diziyi birden konsala bastirin
    */

    int source_arr[100];
    int dest_arr[100];
    int N;
    int *source_ptr;
    int *dest_ptr;
    int *end_ptr;
    source_ptr=source_arr;
    dest_ptr=dest_arr;



    printf("kac elemanli bir dizi olusturmak istersiniz : \n");
    scanf("%d",&N);

    printf("lutfen elemanlari giriniz : \n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",(source_ptr+i));
    }


    end_ptr=&source_arr[N-1];

    printf("kaynak arrayim kopyalamadan once : \n");
    bastir(source_arr,N);


    while(source_ptr <= end_ptr);
    {
        *dest_ptr=*source_ptr;
        source_ptr++;
        dest_ptr++;
    }

    printf("kopyalandiktan sonraki source arrayim : \n");
    bastir(source_arr,N);


    printf("kopyalandiktan sonraki destination arrayim : \n");
    bastir(dest_arr,N);








    return 0;
}
