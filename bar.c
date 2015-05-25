#include <stdio.h>
#include "foo.h"

int main()
{
    printf("1+2=%d\n",foo_add(1,2));
    printf("1-2=%d\n",foo_sub(1,2));
    return 0;
}
