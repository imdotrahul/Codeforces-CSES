#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve()
{
    int n ;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi = *max_element(arr.begin(),arr.end());

    int ans = maxi+1;

    for(int i =0;i<n;i++)
    {
        if(arr[i] == maxi){
            ans = max(ans,(maxi+1 +(i/2) +(n-1-i)/2));
        
        }

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