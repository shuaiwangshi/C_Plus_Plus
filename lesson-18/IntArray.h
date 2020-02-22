#ifndef _INTARRAY_H_
#define _INTARRAY_H_

class IntArray{
private:
    int mlen;
    int *mp;
public:
    IntArray(int len);
    ~IntArray();
    bool get(int index, int &value);
    bool set(int index, int value);
    int length();
};

#endif
