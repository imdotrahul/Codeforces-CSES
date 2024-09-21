#include <iostream>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;

    
    int difference = n-k, result = 0;
    result = result+(n*(n+1))/2;
    result -= (difference*(difference+1))/2;


    if(result%2==0)
    {
        cout<<"YES"<<"\n";

    }
    else{
        cout<<"NO"<<"\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}