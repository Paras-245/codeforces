#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long int i=s;i<e;i++)

int main()
{
    int n,m,a,b;
    cin >> n;
    cin >> m;
    cin >> a;
    cin >> b;
    int special = b /m;
    if(a <= special)
        cout <<  n * a << endl;
    else
        cout << ((n / m) * b) + min(a * (n%m),b) << endl;
    return 0;
}