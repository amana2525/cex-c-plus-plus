#include <iostream>
using namespace std;
#include <fstream>
ifstream fin("cifmaxmin.in");
ofstream fout("cifmaxmin.out");
int main()
{
    int n,i,a,min,c,max,min1=100,max1=9,k1=0,ok;
    fin>>n;
    for(i=1;i<=n;++i)
    {fin>>a;
    min=10;
    max=-1;
    if(a%2==1)
    {++k1;
    ok=1;}
    else
     ok=0;
     while(a)
     {c=a%10;
     a/=10;
     if(c<min)
     min=c;
     if(c>max)
     max=c;}
     if(ok==1)
     {c=min*10+max;
      if(c<min1)
      min1=c;
     }
     else
     {c=max*10+min;
      if(c>max1)
      max1=c;
     }
    }
    fout<<max1<<" "<<n-k1<<" "<<min1<<" "<<k1;
    return 0;
}
