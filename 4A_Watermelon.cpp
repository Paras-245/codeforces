#include<iostream>
using namespace std;
int main()
{
    int weight;
    cin >> weight;
    // we put weight > 2 because we need even number of kilos
    
    if(weight % 2 == 0 && weight>2)
    {
        cout << "YES\n";
    }  
    else
    {
        cout << "NO\n"; 
    }
    return 0;
}