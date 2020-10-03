#include "solutions.h"
#include <cassert>

int main(int argc, const char * argv[])
{
    assert(task1(10) == 23);

    assert(task2(50) == 44);
    assert(task2(700) == 798);
    assert(task2(3000) == 3382);

    return 0;
}
