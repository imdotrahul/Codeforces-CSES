#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int maxeven = INT_MIN;
    int maxodd = INT_MIN;
    int even = 0;
    int odd = 0;

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2==0)
        {
            even++;
            maxeven = max(maxeven,arr[i]);
        }
        if(i%2==1)
        {
            odd++;
            maxodd = max(maxodd,arr[i]);
        }
        
    }
    int a = even+maxeven;
    int b = maxodd+odd;


   int result = max(a,b);

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