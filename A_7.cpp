#include <iostream>
#include <string.h>
using namespace std;

int count_str(string s1, string s2)
{
    bool temp = true;
    int cnt = 0;
    int len1 = s1.size(), len2 = s2.size();
    for (int i=0; i<len2; i++)
    {
        if (s2[i] == s1[0])
        {
            for (int j=0; j<len1; j++)
            {
                if (s1[j] != s2[i+j])
                {
                    temp = false;
                    break;
                }
            }
            if (temp)
                cnt++;
            temp = true;
        }
    }
    return cnt;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << count_str(s1, s2);
    return 0;
}
