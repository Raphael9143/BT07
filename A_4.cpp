#include <iostream>
using namespace std;

int Binary(int* arr, int low, int high, int x);

int main()
{
    int x;
    cout << "nhap so can tim kiem: ";
    cin >> x;
    int n;
    cout << "nhap so phan tu: ";
    cin >> n;
    int *arr;
    int low = 0, high = n-1;
    arr = new int [n];
    cout << "nhap day so: ";
    for (int i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }
    int result = Binary(arr, low, high, x);
    if (result == 0)
        cout << "khong co";
    else cout << "co";
    return 0;
}

int Binary(int* arr, int low, int high, int x)
{
    int mid = (low + high)/2;
    if (low > high && x == *(arr+mid))
        return mid;
    else if (low > high && x != *(arr+mid))
        return 0;
    else if (x > arr[mid])
    {
        return Binary(arr, mid+1, high, x);
    }
    else if (x < arr[mid])
        return Binary(arr, low, mid-1, x);
}
