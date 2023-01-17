#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int x;
        cin>>x;
        if(x==2)
        {
            cout<<x<<" eh primo"<<endl;

        }
        else
        {
        for(int i=2;i<x;i++)
        { if(x%i==0)
            {
               count=0;
                break;
            }
            else
            {
                count=1;
            }
        }
        if(count==1)
        {
            cout<<x<<" eh primo"<<endl;
        }
        else
        {
            cout<<x<<" nao eh primo"<<endl;
        }}
    }
}