#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    logical operators
    &&     ||        !
    ve    ya da      deðildir
    */

    int x = 25;
    int y = 20;

    printf("%d",x>10 && x < 30);
    printf("%d",x>56 && y<56);
    printf("%d",y<15 || x<45);
    printf("%d", x<15 || y > 30);
    printf("%d", !(x>40));

    return 0;
}
