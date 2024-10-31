#include <iostream>

using namespace std;
#include <fstream>
ifstream f("fin");
ofstream g("fout");
int main()
{
    int n,x,y,p,a,b,i,u=0,c=0;
    f>>n>>x>>y>>p;
    for(i=1;i<=n;++i)
    {
     f>>a>>b;
     u=u+a;
     c=c+b;
    }
    if(p==1)
    {g<<u<<endl;
    g<<c<<endl;
    g<<u-c<<endl;}
    else if(p==2)
    {if(u-c>y)
    g<<"DA";
    else
    g<<"NU";}
    return 0;
}
