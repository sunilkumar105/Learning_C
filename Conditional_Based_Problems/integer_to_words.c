/*Probelm: Take user input which will be a number, you need to print the number in english word.
           Like if the user enetrs 1327, then we need to print one thousand three hundred twenty seven */

/*Hint: You can define basic building block number, and can add the string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const char *num_base[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
const char *arr_mid[] = {"ERROR", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "tewnty"};
const char *arr_high[] = {"ERROR", "ERROR", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const char *arr_epic[] = {"hundred", "thousand", "lacs"};

void getNumber(char *str, int num)
{
    sprintf(str, num_base[num]);
}

void getMid(char *str, int num)
{
    sprintf(str, arr_mid[num]);
}

void getHigh(char *str, int num)
{
    sprintf(str, arr_high[num]);
}

int main()
{
    char *num_in_word = (char *)calloc(1000, sizeof(char));
    if (num_in_word == NULL)
    {
        printf("[ ERROR ] Memory allocation failed \r\n");
        return -1;
    }
    else
    {
        printf("[ INFO ] Memory allocated for string where number will be stored as word \r\n");
    }
    while (1)
    {
        memset(num_in_word, 0x0, 1000);
        printf("Enter the number \r\n");
        int num = 0;
        scanf("%d", &num);
        // num = 10;
        printf("Input number is %d \r\n", num);

        /*How should we proceed here?
            1. Divide the number by 1000, if there is any remainder, then add string*/

        int quotient = num / 1000;
        if (quotient > 0)
        {
            char tempStr[100] = {0};
            getNumber(tempStr, quotient);
            strcat(num_in_word, tempStr);
            strcat(num_in_word, " thousand ");
            num -= (quotient * 1000);
        }

        quotient = num / 100;
        if (quotient > 0)
        {
            char tempStr[100] = {0};
            getNumber(tempStr, quotient);
            strcat(num_in_word, tempStr);
            strcat(num_in_word, " hundred ");
            num -= (quotient * 100);
        }

        if ((num < 21) && (num > 10))
        {
            char tempStr[100] = {0};
            num -= 10;
            getMid(tempStr, num);
            strcat(num_in_word, " ");
            strcat(num_in_word, tempStr);
            printf("[ INFO ] Number in word is: %s \r\n", num_in_word);
        }
        else
        {

            quotient = num / 10;
            if (quotient == 1)
            {
                char tempStr[100] = {0};
                getNumber(tempStr, 10);
                strcat(num_in_word, tempStr);
                strcat(num_in_word, " ");
                num -= (quotient * 10);
            }
            else if (quotient > 0)
            {
                char tempStr[100] = {0};
                getHigh(tempStr, quotient);
                strcat(num_in_word, tempStr);
                strcat(num_in_word, " ");
                num -= (quotient * 10);
                // strcat(num_in_word, " hundred");
            }

            char tempStr[100] = {0};
            getNumber(tempStr, num);
            if (num != 0)
            {
                strcat(num_in_word, tempStr);
            }

            printf("[ INFO ] Number in word is: %s \r\n", num_in_word);
        }
    }
}