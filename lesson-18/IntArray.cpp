#include "IntArray.h"

IntArray::IntArray(int len) {
    mlen = len;
    mp = new int[len];
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