#include <stdio.h>
#include <stdint.h>

int main()
{
    // Pointer to the entire array example
    int arr[5] = {10, 20, 30, 40, 50};
    int (*ptr_to_array)[5] = &arr; // Pointer to an array of 5 integers, Pointing to the entire array

    printf("Array address: %p\n", (void *)arr);
    printf("Pointer to array address: %p\n", (void *)ptr_to_array);
    printf("1st element is %d\r\n", *(*ptr_to_array));
    printf("2nd element is %d\r\n", *(*ptr_to_array + 1));
}