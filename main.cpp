#include "solutions.h"
#include <cassert>

int main(int argc, const char * argv[])
{
    assert(multiples_of_3_and_5(10) == 23);
    assert(multiples_of_3_and_5(20) == 78);
    assert(multiples_of_3_and_5(30) == 195);

    assert(even_fibonacci_numbers(50) == 44);
    assert(even_fibonacci_numbers(700) == 798);
    assert(even_fibonacci_numbers(3000) == 3382);
    assert(even_fibonacci_numbers(4000000) == 4613732);

    assert(largest_prime_factor(6783) == 19);
    assert(largest_prime_factor(10013) == 31);
    assert(largest_prime_factor(13195) == 29);

    return 0;
}
