
#include <iostream>
#include <cmath>
using namespace std;
#include <fstream>

ifstream fin("elhc.in");
ofstream fout("elhc.out");

int main()
{
    int t,i,g,k,k1,s[1001]={0},i1,g1;
    fin>>t;
    for(i=1;i<=t;++i)
    {fin>>g>>k;
    k1=0;
    for(i1=1;i1<=k-1;++i1)
    s[i1]=0;
    g1=g;
    s[g%k]++;
    for(i1=2;i1<=k-1;++i1)
    {g*=g1;
    s[g%k]++;
    }
    for(i1=1;i1<=k-1;++i1)
    if(s[i1]!=0)
    ++k1;
    if(k1==k-1)
    fout<<"1";
    else
    fout<<"0";
    }
    return 0;
}
