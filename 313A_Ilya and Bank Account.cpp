#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

int main()
{
    int n ;
    cin >> n;
    int maxi = n;
    if(n/10 > maxi)
    {
        maxi = n/10;
    }
    if(n%10 + (n/100) * 10 > maxi)
    {
        maxi = n % 10 + (n/100) * 10;
    }
    cout << maxi << endl;
    return 0;
}