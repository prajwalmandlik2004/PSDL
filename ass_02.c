// Addition of array of n numbers

#include <xc.h>

void main(void)
{

    unsigned int arr, i, sum;

    arr[5] = {4, 5, 6, 7, 8};
    sum = 0;
    TRISB = 0;
    LATB = 0;

    for (i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    PORTB = sum;
    return;
}


