#include "solutions.h"

size_t multiples_of_3_and_5(size_t value)
{
    --value;
    return ap_sum(3, 3, value / 3) + ap_sum(5, 5, value / 5) - ap_sum(15, 15, value / 15);
}

size_t ap_sum(size_t a, size_t d, size_t n)
{
    return n != 0 ? (2 * a + d * (n - 1)) * n / 2 : 0;
}

size_t even_fibonacci_numbers(size_t value)
{
    // Fact: every third Fibonacci number is even.

    // F_{n+3} =
    // = 2 * F_{n+1} + F_{n} =
    // = 3 * F_{n} + 2 * F_{n-1} =
    // = 3 * F_{n} + F_{n-1} + F_{n-1} =
    // = 3 * F_{n} + (F_{n-1} + F_{n-2}) + F_{n-3} =
    // = 4 * F_{n} + F_{n-3}
    
    // F_{n+3} = 4 * F_{n} + F_{n-3}

    size_t answer = 0;
    size_t firstEven = 0;
    size_t secondEven = 2;
    while (secondEven < value)
    {
        answer += secondEven;
        size_t newFirstEven = secondEven;
        secondEven = 4 * secondEven + firstEven;
        firstEven = newFirstEven;
    }
    return answer;
}

long long largest_prime_factor(long long value)
{
    long long div { 2 };
    while (div * div < value)
    {
        while (value % div == 0)
            value /= div;
        ++div;
    }
    return value;
}