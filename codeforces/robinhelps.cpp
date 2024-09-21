#include <iostream>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int collected = 0,result = 0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            collected+=arr[i];
        }
        else if(arr[i] == 0 && collected > 0) { 
                collected--; 
                result++; 
        } 

    }
    cout<<result<<"\n";

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