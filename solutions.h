#ifndef PROJECT_EULER_SOLUTIONS_H
#define PROJECT_EULER_SOLUTIONS_H

#include <cstddef>

/// Returns the sum of all the multiples of 3 or 5 below 'value'.
size_t multiples_of_3_and_5(size_t value);

/// Returns the sum of an arithmetic progression.
size_t arithmetic_progression_sum(size_t a, size_t d, size_t n);

/// Returns the sum of all even elements of the Fibonacci series that do not exceed 'value'.
size_t even_fibonacci_numbers(size_t value);

/// Returns largest prime divisor of 'value'.
long long largest_prime_factor(long long value);

#endif /* PROJECT_EULER_SOLUTIONS_H */
