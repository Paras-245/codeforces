#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> values;
    int total_sum = 0;;
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n;i++)
    {
        int j;
        cin >> j;
        total_sum+=j;
        values.push_back(j);
    }

    sort(values.begin(),values.end(),greater<int>());

    for(int i:values)
    {
        sum+=i;
        count++;
        // cout << i << " " << sum << "\n";
        if(sum > total_sum - sum)
        {
            break;
        }
    }
    // return count;
    cout << count;
    return 0;
}