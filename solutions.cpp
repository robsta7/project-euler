#include "solutions.h"

size_t task1(size_t value)
{
    value -= 1;
    size_t a { arithmetic_progression_sum(3, 3, value / 3) };
    size_t b { arithmetic_progression_sum(5, 5, value / 5) };
    size_t c { arithmetic_progression_sum(15, 15, value / 15) };
    return  a + b - c;
}

size_t arithmetic_progression_sum(size_t a, size_t d, size_t n)
{
    return n > 0 ? (2 * a + d * (n - 1)) * n / 2 : 0;
}