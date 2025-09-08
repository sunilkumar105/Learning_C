// Problem Statement : Print a simple Pyramid pattern, using for loop, pyramid height should be of 10 line

#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void)
{

#ifdef PRINT_USING_LOOP
    /*Here i was tryin to print the pyramid using for loop, in which i was trying to increase 1 astericks at a time in each row
    It did't work because in terminal,, we cant shift a characcter to et printed as .5 unit, each character will take 1 unit space
    and each character will get printed in its space only.
    Like here, no matter how yuo position the astericks, you wont be able to make a pyramid
    *     *
    **   **
   ***   ***
   Solution: We will have to increase the number of astericks subsequently in each line, like, 1, 3, 5, 8
    */
    int height = 10;
    for (uint64_t i = 1; i < height; i++)
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
#elif PRINT_USING_SIMPLE_PRINTF
    printf("       *       \r\n");
    printf("      ***       \r\n");
    printf("     *****       \r\n");
    printf("    ********       \r\n");
#endif

    // Print using for loop
    int pyramidWidth = 7;
    int numberOfAstericks = 1;
    int numberOfSpaceAtBothSide = (pyramidWidth - numberOfAstericks) / 2;
    for (uint8_t i = 0; i < (pyramidWidth / 2) + 1; i++)
    {
        for (uint8_t k = 0; k < numberOfSpaceAtBothSide; k++)
        {
            printf("-");
        }
        for (uint8_t k = 0; k < numberOfAstericks; k++)
        {
            printf("*");
        }
        for (uint8_t k = 0; k < numberOfSpaceAtBothSide; k++)
        {
            printf("-");
        }
        printf("\r\n");
        numberOfAstericks += 2;
        numberOfSpaceAtBothSide = (pyramidWidth - numberOfAstericks) / 2;
    }
}