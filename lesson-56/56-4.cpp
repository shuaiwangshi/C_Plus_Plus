#include <iostream>
#include<string>

using namespace std;

template<typename T>
void Swap(T& a, T& b)
{
    T t = a;
    a = b;
    b = t;
}

template<typename T>
void sort(T array[], int len)  // Selection sort
{
    for (int i=0; i<len-1; i++)
    {
        for (int j=i+1; j<len; j++)
        {
            if (array[i] > array[j])
                Swap(array[i], array[j]);  // 调用前面的Swap()函数
        }
    }
}

int main()
{
    // int array[] = {12, 324, 543, 32, 43, 54, 1, 23, 54, 90};
    // double array[] = {1.2, 32.4, 5.43, 3.2, 4.3, 54, 1, 2.3, 5.4, 9.0};
    // char array[] = {'f', 'c', 'v', 'b', 'e', 'r', 'q', 's', 'g', 'h'};
    string array[] = {"contains", "technical", "and", "organizational", "documents", "about", "the", "internet", "including", "specifications"};

    int len = sizeof(array)/sizeof(array[0]);

    sort(array, len);

    for (int i=0; i<len; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}