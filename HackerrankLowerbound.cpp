#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int y;
        cin>>y;
        set<int>::iterator it=s.find(y);
        if(it!=s.end())

       {

        set<int>::iterator it1=s.begin();
        int index=0;
        while(it1!=it)
        {
            it1++;
            index++;
        } 
        cout<<"Yes"<<" "<<index+1;
        
        
        }
        else
        {
           it=s.lower_bound(y);
            set<int>::iterator it1=s.begin();
            int index=0;

           while(it1!=it)
        {
            it1++;
            index++;
        } 
        cout<<"NO"<<" "<<index+1;

        }

    }


}