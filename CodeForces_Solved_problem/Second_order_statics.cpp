#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
   // cout<<s.begin(),1<<endl;
   // set<int>::iterator it=s.begin()+1;
   //cout<<next(s.begin(),2)<<endl;
   if(s.size()==1)
   {
    cout<<"NO"<<endl;
   }
   else

  { auto it=next(s.begin(),1);
   cout<<*it<<endl;}
 // auto it=s.begin()+1;
 // cout<<*it<<endl;

}