#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool existsGreaterThanX(const vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > x) {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin>>n;
    
    if(n<3)
    {
        cout<<"-1"<<"\n";
    }
    else{
        vector<int> arr(n);
        int sum = 0;
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int initalavg = sum/n;
        if(existsGreaterThanX(arr,initalavg))
        {
            sort(arr.begin(),arr.end());
            int max2 = arr[n-2];

            int result = n*max2-sum;
            cout<<result<<"\n";


        }
        else{
            cout<<"0"<<"\n";
        }


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