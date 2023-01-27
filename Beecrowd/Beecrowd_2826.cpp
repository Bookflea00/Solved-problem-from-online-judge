#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    int l;
   // l=strcmp(a,b);
   if(a.compare(b)>0)
   {
    cout<<b<<endl;
    cout<<a<<endl;

   }
   else if(a.compare(b)<0)
   {
    cout<<a<<endl;
    cout<<b<<endl;
   }


}