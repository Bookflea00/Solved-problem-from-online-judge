#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,j,count=0,count2=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {  // count2=0;

       if(arr[i]>0)
       {
        count+=arr[i];
       }
       else
       {
       if( count>0)
       {
        count--;
        //count2++;
       }
       else
       {
        count2++;
       }}
       
    }
    cout<<count2;

}