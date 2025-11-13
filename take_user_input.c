#include <stdio.h>
#include <string.h>

int a = 0;
int main(void)
{

    /*Single argument as input*/
    // #define TAKE_SINGLE_INPUT
    #ifdef TAKE_SINGLE_INPUT
    printf("Hey, enter the value of the variable temp \r\n");
    scanf("%d", &a);
    printf("You have entered the value %d \r\n", a);
    #endif

    /*Take more than 1 input simultaneously, separated by comma*/
    #define TAKE_MORE_THAN_1_INPUT_SIMULTANEOUSLY
    #ifdef TAKE_MORE_THAN_1_INPUT_SIMULTANEOUSLY
    printf("Input two angles of the triangle \r\n");
    int sideA, sideB;
    scanf("%d,%d", &sideA, &sideB);
    printf("You have entered sideA: %d, sideB: %d \r\n", sideA, sideB);
    /*
    Note on how is this working:
    It is taking one input string as the scanf first argument is "format specifier"
    between two inputs, iff there us space, than it will differentiate 2 input based on space
    same will work ffor comma
    */
    #endif


    return 0;
}