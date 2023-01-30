#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,res=0,sum=0;
   cin>>t;
   while(t--)
   {
    sum=0;
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     res=0;
     sort(arr,arr+n);
     for(int i=n-1;i>=0;i--)
     {
       
       if(sum<w)
       {
        sum+=arr[i];
       }
       else
       {
        res++;
       }
     }
     cout<<res<<endl;

   }
}