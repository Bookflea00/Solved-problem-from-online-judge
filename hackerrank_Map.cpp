#include<bits/stdc++.h>
using namespace std;
int main()
{   map<string,int>m;
    int q;
    cin>>q;
    while(q--)
    {
        int type,marks;
        string name;
        cin>>type;
        if(type==1)
        {
            cin>>name;
            cin>>marks;
            m[name]=m[name]+marks;
        }
        if(type==2)
        {
            cin>>name;
            m.erase(name);
        }
        if(type==3)
        {
            cin>>name;
            cout<<m[name]<<endl;
        }
    }
}