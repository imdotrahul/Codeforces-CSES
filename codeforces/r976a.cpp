#include <iostream>
using namespace std;

void solve()
{
    int n ,k;
    cin>>n>>k;

    if(k==1)
    {
        cout<<n<<"\n";
        return;
    }
    int ans = 0;
    while(n)
    {
        ans += n%k;
        n = n/k;
    }
    cout<<ans<<"\n";
    
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