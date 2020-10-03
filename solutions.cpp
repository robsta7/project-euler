#include "solutions.h"

int task1(int value)
{
    value -= 1;
    int a { arithmetic_progression_sum(3, 3, value/3) };
    int b { arithmetic_progression_sum(5, 5, value/5) };
    int c { arithmetic_progression_sum(15, 15, value/15) };
    return  a + b - c;
}

int arithmetic_progression_sum(int a, int d, int n)
{
    return n > 0 ? (2 * a + d * (n - 1)) * n / 2 : 0;
}