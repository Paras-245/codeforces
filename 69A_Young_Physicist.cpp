
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector<int> v;
    // int x,y,z;
    vector<int> coor(3);
    vector<int> sum(3,0);
    for (int i = 0; i < n; i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cin >> coor[j];
            sum[j] += coor[j];
        }
    }

    if(sum[0]== 0 && sum[1] == 0 && sum[2] == 0)
    {
        cout << "YES\n"; 
    }
    else{
        cout << "NO\n";
    }
    return 0;
}