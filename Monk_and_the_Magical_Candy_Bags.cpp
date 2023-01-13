#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<long long>bag;
        for(int i=0;i<n;i++)
        {
            long long candy_count;
            cin>>candy_count;
            bag.insert(candy_count);

        }
        long long total_candy=0;
        for(int i=0;i<k;i++)
        {
          auto it=(--bag.end());
          long long candy_count=*it;
          total_candy+=candy_count;
          bag.erase(it);
          bag.insert(candy_count/2);

        }
        cout<<total_candy<<endl;


    }
}