#include <stdio.h>
#include <stdint.h>

int arr[2][2] = {0};

int main()
{
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;

    printf("Size of the array is %lu \r\n", sizeof(arr) / sizeof(int));

    /*Accesasing element of an 2D array using [] operator*/
    for (uint8_t i = 0; i < (sizeof(arr) / sizeof(int)) / 2; i++)
    {
        for (uint8_t j = 0; j < (sizeof(arr) / sizeof(int)) / 2; j++)
        {
            printf("Value at the index of arr[%u][%u] is %d \r\n", i, j, arr[i][j]);
        }
    }

    /*Accesasing element of an 2D array using pointer dereferencing*/
    for (uint8_t i = 0; i < (sizeof(arr) / sizeof(int)) / 2; i++)
    {
        for (uint8_t j = 0; j < (sizeof(arr) / sizeof(int)) / 2; j++)
        {
            printf("Value at the index of arr[%u][%u] is %d \r\n", i, j, *(*arr + (i + j)));
        }
    }
}