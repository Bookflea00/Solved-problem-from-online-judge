#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   // cin>>n;
   scanf("%d",&n);
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
      int x;
     // cin>>x;
     scanf("%d",&x);
      mp[x]++;
    }
    map<int,int>::iterator it;
    
    int res=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        int num=(*it).first;
        int times=(*it).second;
        if(num>times)
        {
            res+=times;
        }
        else
        {
            res+=times-num;
        }

    }
    cout<<res<<endl;
}
