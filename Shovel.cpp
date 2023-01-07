#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,x,i,count=0;;
    cin>>k>>r;
    for(i=1;i<=10;i++)
    {
        if((k*i)%10==0 ||(k*i)%10==r)
        {
            cout<<i;
            break;
            
        }
        else
        continue;

    }
   // cout<<count<<endl;
}