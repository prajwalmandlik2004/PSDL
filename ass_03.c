// Exchange of memory

// 01 : Internal to Internal
#include <xc.h>

void main(void)
{
    int i;
    int src[5] = {0X02, 0X03, 0X04, 0X05, 0X06};
    int dest[5];
    for (i = 0; i <= 4; i++)
    {
        dest[i] = src[i];
    }
    return;
}

// Internal to External

#include <xc.h>

void main(void)
{

    int i;
    int src[3] = {0x03, 0x05, 0x07};
    int dest[3] = {0x06, 0x07, 0x08};
    int temp[3];

    for (i = 0; i <= 2; i++)
    {
        temp[i] = src[i];
        src[i] = dest[i];
        dest[i] = temp[i];
    }

    return;
}
