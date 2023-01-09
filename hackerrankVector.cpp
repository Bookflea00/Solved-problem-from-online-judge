#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>V;
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
      cin>>x;
      V.push_back(x);
    }
    int a,b,d;
    cin>>a;
    V.erase(V.begin()+a-1);
   // for(int i=1;i<=V.size();i++)
    //{
    //    cout<<V[i];
  //  }
    cin>>b>>d;
    V.erase(V.begin()+b-1,V.begin()+d-1);
    cout<<V.size()<<endl;
    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    return 0;





}