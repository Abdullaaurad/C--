#include <iostream>
using namespace std;

template <typename T>
int fun(const T &x)
{
    static int count = 0;
    return ++count;
}

int main()
{
    fun<int>(1);
    fun<int>(12);
    cout << fun<double>(12.1) << ", ";
    cout << fun<int>(1);
    return 0;
}