#include <iostream>
using namespace std;

int count_even(int *arr, int n);

int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
    for (int i=0; i<n; i++)
    {
        cin >> *(arr+i);
    }
    cout << count_even(arr, n);
    return 0;
}

int count_even(int *arr, int n)
{
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        if (*(arr+i) % 2 == 0)
            cnt++;
    }
    return cnt;
}
