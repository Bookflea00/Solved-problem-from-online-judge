#include<bits/stdc++.h>
using namespace std;
int main()
{   unordered_set<long long>s;
    int t;
    cin>>t;
    while(t--)
    {
        s.clear();
      long long n,m;
      cin>>n>>m;

    
    while(n--)
    {
    long long value;
        cin>>value;
        s.insert(value);
    }
    while(m--)
    {
        long long value;
        cin>>value;
        if(s.find(value)!=s.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {cout<<"NO"<<endl;
        }
        s.insert(value);
    }
    
    
    }
}
