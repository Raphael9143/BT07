#include <iostream>
using namespace std;

void f(int arr[]);

int main()
{
    int arr[100];
    cout << sizeof(arr) << endl;
    f(arr);
}

void f(int arr[])
{
    cout << sizeof(arr);
}
