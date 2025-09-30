#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int main()
{

    /*Find whether a byte is a number, character or what*/
    uint8_t byteArr[20] = {'1', 'a', '3', 'F', 0x12, 0x01};
    for (int i = 0; i < 5; i++)
    {
        if (isalpha(byteArr[i]))
        {
            printf("Index: %c is a alphanumeric \r\n", byteArr[i]);
        }
    }

    return 0;
}