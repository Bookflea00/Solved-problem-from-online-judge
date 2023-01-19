#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    vector<int>v;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int z;
    cin>>z;
    while(z--)
    {
        int y;
        cin>>y;
       vector<int>::iterator temp;
       temp=lower_bound(v.begin(),v.end(),y);
       if(*temp==y ||(*(temp+1)==y))
       {
        cout<<"Yes"<<" "<<distance(v.begin(),temp+1)<<endl;

       }
       else
       {
        cout<<"No"<<" "<<distance(v.begin(),temp+1)<<endl;
        
       }
    }
}