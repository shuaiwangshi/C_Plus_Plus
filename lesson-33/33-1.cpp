#include <iostream>
#include <string>

using namespace std;

// 冒泡排序，比较两个字符串的大小
void string_sort(string sa[], int len)
{
    for (int i = 0; i < len-1; i++) 
    {
        for (int j = 0; j < len-i-1; j++) 
        {
            if (sa[j] > sa[j+1]) 
            {
                // string tmp;
                // tmp = sa[j];
                // sa[j] = sa[j+1];
                // sa[j+1] = tmp;

                swap(sa[j], sa[j+1]);  // C++标准库提供的
            }
        }
    }
}

string string_add(string sa[], int len)
{
    string ret = "";

    for (int i=0; i<len; i++)
        ret += sa[i] + " ; ";  // 很直观

    return ret;
}

void array_sort(int ia[], int len)
{
    for (int i = 0; i < len-1; i++) 
    {
        for (int j = 0; j < len-i-1; j++) 
        {
            if (ia[j] > ia[j+1])
            {
                int tmp;

                tmp = ia[j];
                ia[j] = ia[j+1];
                ia[j+1] = tmp;
            }
        }
    }
}

int main()
{
    string sa[7] =    // 初始化
    {
        "Hello World",
        "D.T.Software",
        "C#",
        "Java",
        "C++",
        "Python",
        "TypeScript"
    };


    string_sort(sa, 7);

    for (int i=0; i<7; i++)
        cout << sa[i] << endl;

    cout << endl;

    string ret = string_add(sa, 7);
    cout << ret << endl;


/*
    int array[10] = {3, 43, 89, 3, 90, 23, 14, 89, 36, 66};

    array_sort(array, 7);
    for (int i=0; i<7; i++)
        cout << array[i] << endl;
*/


    return 0;
}