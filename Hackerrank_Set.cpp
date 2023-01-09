#include<bits/stdc++.h>
using namespace std;
int main()
{   set<int>s;
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        if(y==2)
        {
            s.erase(x);
        }
        if(y==3)
        {
           auto it=s.find(x);
            if(it!=s.end())
            {
              cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    

    


    }
}