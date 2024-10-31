
#include <iostream>

using namespace std;
#include <fstream>
#include <cmath>
ifstream fin("pitic.in");
ofstream fout("pitic.out");
int main()
{
    int m,i,d,d1,ok,ok1,s=0;
    fin>>m;
    fout<<"0"<<" ";
    for(i=2;i<=m;++i)
    {ok=1;
    s=0;
    for(d=2;d<=i/2;++d)
    if(i%d==0)
    {ok1=1;
    for(d1=2;d1<=sqrt(d);++d1)
    if(d%d1==0)
    ok1=0;
    if(ok1==1)
    s=s+d;
    ok=0;}
    if(ok==1)
    fout<<i<<" ";
    else
    {fout<<s<<" ";
    }
    }
    return 0;
}
