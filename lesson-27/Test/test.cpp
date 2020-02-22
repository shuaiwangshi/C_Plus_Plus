#include "IntArray.h"
#include <stdio.h>

int main()
{
    IntArray * obj = IntArray::NewInstance(5);
    
    if(!obj)
        return -1;

    for (int i=0; i<obj->length(); i++) {
        obj->set(i, i);
    }

    for (int value=0, i=0; i<obj->length(); i++) {
        obj->get(i, value);
        printf("obj[%d] = %d\n", i, value);
    }

    delete obj;

    // int i, int j;  // 没有这种语法

    return 0;
}