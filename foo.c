#include "foo.h"

int foo_neg(int);
inline int foo_neg(int x)
{
    return -x;
}

int foo_sub(int x, int y)
{
    return foo_add(x,foo_neg(y));
}
