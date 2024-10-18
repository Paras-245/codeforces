#include <iostream>
using namespace std;
int main()
{
    string word;
    string ans;
    cin >> word;
    for (auto &ch : word)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch=='y' || ch=='Y')
        {
            continue;
        }

        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        ans.push_back('.');
        ans.push_back(ch);
    }
    cout << ans;
    return 0;
}