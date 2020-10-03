#include "solutions.h"
#include <cassert>

int main(int argc, const char * argv[])
{
    assert(multiples_of_3_and_5(10) == 23);

    assert(even_fibonacci_numbers(50) == 44);
    assert(even_fibonacci_numbers(700) == 798);
    assert(even_fibonacci_numbers(3000) == 3382);
    assert(even_fibonacci_numbers(4000000) == 4613732);

    assert(task3(6783) == 19);
    assert(task3(10013) == 31);
    assert(task3(13195) == 29);

    return 0;
}
