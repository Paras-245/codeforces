#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        cin >> word;
        if (word.length() > 10)
        {
            int replace = word.length() - 2; 
            cout << word[0] << replace << word[word.length()-1] <<"\n";
        }
        else
        {
            cout << word<<"\n";
        }
    }
    return 0;
}