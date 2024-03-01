#include <iostream>
using namespace std;

template <typename T, int max>
int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}

int main()
{
    int arr1[] = {10, 20, 15, 12, 8, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {25,87};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << arrMin<int, 10>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2) << endl;
}