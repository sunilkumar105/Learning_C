#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

const char *num_base[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

void printNumber (int a, int b){
    if(a < 10){
        for(int i=a; i<=b; i++){
            if(i < 10){
                printf("%s\n",num_base[i]);
            }else{
                if((i%2) == 0){
                    printf("even\n");
                }else{
                    printf("odd\n");
                }
            }
        }
    }
}

int main() 
{
    int a = 8, b = 11;
    // scanf("%d\n%d", &a, &b);
    printNumber(a, b);


    return 0;
}

