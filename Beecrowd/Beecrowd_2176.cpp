#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int one_count=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one_count++;
        }
    }
    if(one_count%2==0)
    {
       s.push_back('0'); 
    }
    else
    {
        s.push_back('1');
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;

}