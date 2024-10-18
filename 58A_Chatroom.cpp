#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    string hello = "hello";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == hello[count])
        {
            count++;
        }
    }
    if(count == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
