#include <stdio.h>
#include <stdbool.h>
#include "gt.h"

void printnumbers(int i)
{

    if (greaterThanzero(i) == true)
    {

        printf("%d Greater than 0\n", i);

    }

    else {
        printf("%d is not Greater than 0\n", i);
    }
}
