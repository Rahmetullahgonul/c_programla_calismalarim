#include <stdio.h>
#include <stdlib.h>


#define PI 3.14
#define SAYI 5
#define POWER 1


#if !defined POWER || POWER < 2 //power tanýmsýz veya 2 den küçükse hata fýrlatýcak
#error POWER is not defined or is less than 2
#endif



int main()
{

    return 0;
}
