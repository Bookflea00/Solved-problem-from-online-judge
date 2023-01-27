#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
  {
    int x;
    cin>>x;
    int y;
    for(int i=0;i<x;i++)
    {
        //int y;
        cin>>y;
        cout<<s[y-1];
    }
    cout<<endl;
  }
return 0;
     //sort(v.begin(),v.end());

}