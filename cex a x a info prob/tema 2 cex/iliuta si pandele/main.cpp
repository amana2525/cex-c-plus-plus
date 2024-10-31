#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("copii.in.c");
ofstream fout("copii.out");

int main()
{
    int C,k,k1,nr=1,i,d,maxd,d1,max;
    long long p=1,x;
    fin>>C;
    fin>>x;
    if(C==1)
    {fin>>k1;
     for(i=1;i<=x;++i)
     {p*=i;}
     while(p%10==0)
     {p/=10;}
     for(i=1;i<=k1;++i)
     {nr*=10;}
     fout<<p%nr;
    }
    else
    {
    for(d=1;d<=x;++d)
    {k=0;
     for(d1=1;d1<=d;++d1)
     if(d%d1==0)
     ++k;
     if(k%2==1)
     {max=d;
     maxd=k;
     }
    }
    fout<<max<<" "<<maxd;
    }
    return 0;
}
