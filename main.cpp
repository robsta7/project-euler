#include "solutions.h"
#include <cassert>

int main(int argc, const char * argv[])
{
    assert(task1(10) == 23);

    assert(task2(50) == 44);
    assert(task2(700) == 798);
    assert(task2(3000) == 3382);
    assert(task2(4000000) == 4613732);

    assert(task3(6783) == 19);
    assert(task3(10013) == 31);
    assert(task3(13195) == 29);

    return 0;
}
