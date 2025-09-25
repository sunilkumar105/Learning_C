#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here

    // get the nth term-3, -2, -1
    // As you get the nth term-1,, add and return.
    static int currentNthIndex = 4, currentNthIndexValue;
    static bool indexSet = false;
    static int nthIndexWhoseValueToBeFound = 0;

    // store n in stati val
    if (!indexSet)
    {
        nthIndexWhoseValueToBeFound = n;
        indexSet = true;
    }

    if (nthIndexWhoseValueToBeFound < 3)
    {
        return a + b + c;
    }

    if (currentNthIndex == nthIndexWhoseValueToBeFound)
    {
        return a + b + c;
    }
    else
    {
        currentNthIndexValue = a + b + c;
        int nthIndexValueCalc = find_nth_term(++currentNthIndex, b, c, currentNthIndexValue);
        return nthIndexValueCalc;
    }
    return 0;
}

int main()
{
    int n, a, b, c;

    // scanf("%d %d %d %d", &n, &a, &b, &c);
    // int ans = find_nth_term(n, a, b, c);
    int ans = find_nth_term(11, 1, 2, 3);

    printf("%d", ans);
    return 0;
}