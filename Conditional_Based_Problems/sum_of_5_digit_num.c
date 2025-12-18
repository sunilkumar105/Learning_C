/* Given a five digit integer, print the sum of its digits.
    Constraint = 10000 < n < 99999

    Study: What are the possible ways to extract each digit of n digit integer number
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{

    int n = 0, sum = 0;
    scanf("%d", &n);

    /*Start dividing by 100000 and remove one '0' from each next step*/
    int quotient = n / 10000;
    if (quotient > 0)
    {
        sum += quotient;
        n -= (quotient * 10000);
    }
    quotient = n / 1000;
    if (quotient > 0)
    {
        sum += quotient;
        n -= (quotient * 1000);
    }
    quotient = n / 100;
    if (quotient > 0)
    {
        sum += quotient;
        n -= (quotient * 100);
    }
    quotient = n / 100;
    if (quotient > 0)
    {
        sum += quotient;
        n -= (quotient * 100);
    }
    quotient = n / 10;
    if (quotient > 0)
    {
        sum += quotient;
    }
    int remainder = n % 10;
    sum += remainder;
    printf("%d",sum);
    return 0;
}