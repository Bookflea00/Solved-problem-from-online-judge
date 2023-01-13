#include<bits/stdc++.h>
using namespace std;
int main()
{   set<string>s;
    int t;
    cin>>t;
    while(t--)
    {   s.clear();
        int n;
        cin>>n;
        while(n--)
        {
            string si;
            cin>>si;
            s.insert(si);


        }
        for(auto it:s)
        {
            cout<<it<<endl;
        }
    }
}
