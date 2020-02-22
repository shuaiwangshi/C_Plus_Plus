#ifndef _INTARRAY_H_
#define _INTARRAY_H_

class IntArray{
private:
    int mlen;
    int *mp;
    IntArray(int len);  // 这样就只能通过静态成员函数去创建对象了
public:
    ~IntArray();
    bool get(int index, int &value);
    bool set(int index, int value);
    int length();
    bool construct(int len);

    static IntArray* NewInstance(int len);
};

#endif
