#include <stdio.h>
#include <stdint.h>

int arr[5] = {0, 1, 2, 3, 4};
int main()
{
    printf("*******By dereferencing using[] operator \r\n");
    for (uint8_t i = 0; i < 5; i++)
    {
        printf("%uth element is %d \r\n", i, arr[i]);
    }
    printf("*******Address of each element of the array \r\n");
    for (uint8_t i = 0; i < 5; i++)
    {
        printf("%uth element's address is %p \r\n", i, &arr[i]);
    }
    printf("*******By dereferencing a pointer \r\n");
    for (uint8_t i = 0; i < 5; i++)
    {
        printf("%uth element is %d \r\n", i, *arr + i);
    }
    return 0;
}