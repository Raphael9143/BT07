#include <iostream>
using namespace std;
int main()
{
    char* n = new char[5];
    for (int i=0; i<5; i++)
    {
        cin >> n[i];
    }
    cout << sizeof(n);
    return 0;
}
