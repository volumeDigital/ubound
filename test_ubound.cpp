#include <ubound.h>
#include <cassert>

using namespace ubnd;

int main(int argc, char** args)
{
    unum a(3);
    unum b(3);
    unum c(6);

    assert(a == b);
    assert(a != c);
    assert(a + b == c);

    return 0;
}

