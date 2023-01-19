#include<bits/stdc++.h>
using namespace std;
int main()
{
    double V,D;
    double height,area;
    while((cin>>V>>D))
   {//cin>>V;
    //cin>>D;
    double r=D/2;
    height=V/(3.14*r*r);
    area=3.14*(r*r);
    //cout<<"ALTURA = "<<setprecision(2)<<height<<endl;
    //cout<<"AREA = "<<setprecision(2)<<area<<endl;
    printf("ALTURA = %.2lf\n",height);
    printf("AREA = %.2lf\n",area);}

}