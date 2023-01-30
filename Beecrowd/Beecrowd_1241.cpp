#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,i,j;
    int t;
    cin>>t;
    while(t--)
    {
        count=0;
        string s1;
        string s2;
        cin>>s1>>s2;
        for(j=s2.size(),i=s1.size();j>=0;j--,i--)
        {
            if(s1[i]==s2[j])
            {
                count++;
            }
            else
            break;
        }
        if(count==s2.size()+1)
        {
            cout<<"encaixan"<<endl;
        }
        else
        {
            cout<<"nao encaixan"<<endl;
        }

    }
}