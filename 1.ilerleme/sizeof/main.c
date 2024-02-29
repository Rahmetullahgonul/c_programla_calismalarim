#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    printf("number degiskeni %d kadar yer tutar \n",sizeof(number));
    printf("int degiskeni %d byte kadar yer tutar \n",sizeof(int));
    printf("float degiskeni %d byte kadar yer tutar \n",sizeof(float));
    printf("char degiskeni %d byte kadar yer tutar \n",sizeof(char));
    printf("double degiskeni %d byte kadar yer tutar \n",sizeof(double));
    */


    int number1 = 15;
    float number2 = 10.15;
    double number3 = 112.677;
    char letter = 'r';

    printf("number1 degiskeni %d byte kadar yer tutar\n",sizeof(number1));
    printf("number2 degiskeni %d byte kadar yer tutar\n",sizeof(number2));
    printf("number3 degiskeni %d byte kadar yer tutar\n",sizeof(number3));
    printf("letter degiskeni %d byte kadar yer tutar\n",sizeof(letter));


    return 0;
}
