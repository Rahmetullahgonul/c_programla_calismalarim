#include <stdio.h>
#include <stdlib.h>

int main()
{
// bu benim kendi sýnavda yazdýðým kod
/*
int num,numx,ldig,fdig,numdig=0,i,pw=1,nnum=0;
printf("enter a number");
scanf("%d",&num);
for(numx=num;numx>0;numx=numx/10)
{
    numdig=numdig+1;
}
for(i=1;i<numdig;i++)
{
    pw=pw*10;
}
fdig=num/pw;
nnum=ldig*pw;
printf("%d\n",nnum);
nnum=nnum+fdig; // bu satýrý sen doldurman lazým
printf("%d",nnum);
*/


/*
    int num, numx, ldig, fdig, numdig = 0, i, pw = 1, nnum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count the number of digits in the input number
    for (numx = num; numx > 0; numx /= 10) {
        numdig = numdig + 1;
    }

    if (numdig > 1) {
        // Calculate the power of 10
        for (i = 1; i < numdig - 1; i++) {
            pw = pw * 10;
        }

        // Extract the first and last digits
        fdig = num / pw;
        ldig = num % 10;

        // Reverse the first and last digits
        nnum = ldig * pw + num % pw - ldig + fdig;

        printf("Number with reversed first and last digits: %d\n", nnum);
    } else {
        printf("The number has only one digit, no reversal needed.\n");
    }
*/
/*
int num,numx,ldig,fdig,numdig=0,i,pw=1,nnum=0;
printf("enter a number");
scanf("%d",&num);
for(numx=num;numx>0;numx=numx/10)
{
    numdig=numdig+1;
}
for(i=1;i<numdig;i++)
{
    pw=pw*10;
}
fdig=num/pw;
nnum=ldig*pw;
num=nnum+num%pw-ldig+fdig;
printf("%d",nnum);
*/

/*
    int num, numx, ldig, fdig, numdig = 0, i, pw = 1, nnum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count the number of digits in the input number
    for (numx = num; numx > 0; numx /= 10) {
        numdig = numdig + 1;
    }

    if (numdig > 1) {
        // Calculate the power of 10
        for (i = 1; i < numdig - 1; i++) {
            pw = pw * 10;
        }

        // Extract the first and last digits
        fdig = num / pw;
        ldig = num % 10;

        // Reverse the first and last digits
        nnum = ldig * pw + num % pw / 10 * 10 + fdig;

        // Display the reversed number
        printf("Number with reversed first and last digits: %d\n", nnum);
    } else {
        printf("The number has only one digit, no reversal needed.\n");
    }
*/












    return 0;
}
