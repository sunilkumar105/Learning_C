// Problem Statement : Print a simple Pyramid pattern, using for loop, pyramid height should be of 10 line

#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void)
{

    int height = 10;
    for (uint64_t i = 0; i < height; i++)
    {
        uint8_t numberOfAsteris = i;
        uint8_t numberOfspaces = height - i;
        uint8_t spaceOnBothSide = (numberOfspaces / 2) + (numberOfspaces % 2);
        for (uint8_t i = 0; i < spaceOnBothSide; i++)
        {
            printf("-");
        }
        for (uint8_t i = 0; i < numberOfAsteris; i++)
        {
            printf("*");
        }
        for (uint8_t i = 0; i < spaceOnBothSide; i++)
        {
            printf("-");
        }
        printf("\r\n");
    }
}