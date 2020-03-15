#ifndef _OPERATOR_H_
#define _OPERATOR_H_

template <typename T>
class Operator
{
public:
    T add(T a, T b);
    T subtract(T a, T b);
    T multiply(T a, T b);
    T divide(T a, T b);
};

template <typename T>    // 每个成员函数前面都要加上模板的声明
T Operator<T>::add(T a, T b)
{
    return a + b;
}

template <typename T>
T Operator<T>::subtract(T a, T b)
{
    return a - b;
}

template <typename T>
T Operator<T>::multiply(T a, T b)
{
    return a * b;
}

template <typename T>
T Operator<T>::divide(T a, T b)
{
    return a / b;
}

#endif
