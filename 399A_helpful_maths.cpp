#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> digits;
    for (int i = 0; i < s.length(); i += 2)
    {
        digits.push_back(s[i] - '0');
    }

    sort(digits.begin(), digits.end());

    if (digits.size() == 1)
    {
        cout << digits[0];
    }
    else
    {
        for (int i = 0; i < digits.size() - 1; i++)
        {
            cout << digits[i] << "+";
        }
        cout << digits.back();
    }
    return 0;
}