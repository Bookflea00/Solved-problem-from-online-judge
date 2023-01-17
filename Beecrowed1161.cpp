#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  m,n;
   while(cin>> m >> n)
   {
    long long fact1=1;
    long long fact2=1;
    for(int i=1;i<=m;i++)
    {
        fact1=fact1*i;
    }
    for(int i=1;i<=n;i++)
    {
        fact2=fact2*i;
    }
    cout<<fact1+fact2<<endl;


   }
    
}