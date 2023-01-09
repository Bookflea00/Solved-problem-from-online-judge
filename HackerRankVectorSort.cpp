#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>V;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        V.push_back(x);


    }
    sort(V.begin(),V.end());
    for(int i=0;i<n;i++)
    {
        cout<<V[i]<<" ";
    }

    
}