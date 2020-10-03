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

size_t task2(size_t value)
{
    size_t answer { 0 };

    // Fact: every third Fibonacci number is even.

    // F_{n+3} =
    // = 2 * F_{n+1} + F_{n} = 3 * F_{n} + 2 * F_{n-1} =
    // = 3 * F_{n} + F_{n-1} + F_{n-1} =
    // = 3 * F_{n} + (F_{n-1} + F_{n-2}) + F_{n-3} =
    // = ... = 4 * F_{n} + F_{n-3}

    // F_{n+3} = 4 * F_{n} + F_{n-3}

    size_t a0 { 0 };
    size_t a1 { 1 };
    size_t a2 { 1 };
    size_t a3 { 2 };

    size_t currentEven { 2 };

    while (currentEven < value)
    {
        answer += currentEven;
        currentEven += 4 * a3 + a0;
        a3 += a2 + a1;
        a0 = a1;
        a1 = a2;
    }

    return answer;
}