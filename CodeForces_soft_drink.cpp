#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p;
    long long int x=n*l;
    long long int y=n*p;
    cin>>n>>k>>l>>c>>d>>p>>x>>y;
    int a=k*l/x;
    int b=p/y;
    int e=c*d;
    cout<<min(a,min(b,e))/n<<endl;
    



}