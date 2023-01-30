#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int ans=0;
        int c[1001]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            c[arr[i]]++;
            ans=max(ans,c[arr[i]]);
        }
        cout<<n-ans<<endl;
    }
}