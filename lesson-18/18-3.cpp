#include <stdio.h>
#include "IntArray.h"


int main()
{
    IntArray ia(10);

    for (int i=0; i<ia.length(); i++) {
        ia.set(i, i);
    }

    for (int i=0; i<ia.length(); i++) {
        int value;
        ia.get(i, value);
        printf("value = %d\n", value);
    }

    if (!ia.set(10, 10))
        printf("Out of range...\n");

    return 0;
}