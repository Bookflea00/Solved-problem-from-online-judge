#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  
  int h,g;
  int count=0;
  vector<pair<int,int>>v;
  for(int i=0;i<t;i++)
  {
    cin>>h>>g;

   // make_pair()
   v.push_back(make_pair(h,g));

  }
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v.size();j++)
    {
      if(v[i].first==v[j].second)
      {
        count++;
      }
    }
  }
  cout<<count<<endl;
}
