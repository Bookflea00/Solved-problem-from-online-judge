#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        count=0;
        long long a,b,n;
        cin>>a>>b>>n;
        while(max(a,b)<=n)
        {
          if(a>=b)
          {
            b+=a;
          }
          else
          {
            a+=b;
          }
          count++;
        }
        cout<<count<<endl;
    }
}