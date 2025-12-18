#include <stdio.h>
#include <stdint.h>
#include <string.h>

// This program will count the number of duplicate character in a string and the number of times it is present

char str[1024] = "This is a sample string";
int main(void)
{
    for (uint8_t i = 0; i < strlen(str); i++)
    {
        char findDuplicacyOfChar = str[i];
        uint8_t duplicateCount = 0;
        for (uint8_t j = 0; j < strlen(str); j++)
        {
            if (findDuplicacyOfChar == str[j])
            {
                duplicateCount++;
            }
        }
        if (duplicateCount > 1)
        {
            printf("Char %c is present %u number of times \r\n", findDuplicacyOfChar, duplicateCount);
        }
        else
        {
            printf("Char %c is unique in the string\r\n", findDuplicacyOfChar);
        }
    }
}