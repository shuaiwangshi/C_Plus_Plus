#include "IntArray.h"
#include <stdio.h>

IntArray::IntArray(int len) {
    mlen = len;
    // mp = new int[len];
}

IntArray::~IntArray()
{
    delete []mp;
}

bool IntArray::get(int index, int &value)
{
    bool ret = true;

    if (index >= mlen) {
        ret = false;
    } else {
        value = mp[index];
    }

    return ret;
}

bool IntArray::set(int index, int value)
{
    bool ret = true;
    // bool ret = (index >= 0) && (index < length());

    if (index >= mlen) {
        ret = false;
    } else {
        mp[index] = value;
    }

    return ret;
}

int IntArray::length()
{
    return mlen;
}

bool IntArray::construct(int len)
{
    mp = new int[len];
    
    return (mp == NULL) ? false : true;
}

IntArray* IntArray::NewInstance(int len)  // 注意在类声明时时该函数有static，但是在定义时不能有static
{
    IntArray * ret = new IntArray(len);

    if (!(ret && ret->construct(len))) {
        delete ret;
        ret = NULL;
    }

    return ret;
}