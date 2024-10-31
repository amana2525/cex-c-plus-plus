
#include <iostream>
#include <cmath>
using namespace std;
#include <fstream>

ifstream fin("palpow");
ofstream fout("palpow.out");

int main()
{
    int n,n1,i,i1,d,nr,a,k,min=10000,max=-1000,k1,k2=0;
    cin>>n;
    for(a=1;a<=n;++a)
    {
        cin>>i;
        i1=i;
        nr=0;
        k=0;
        k1=0;
        while(i1)
        {nr=nr*10+i1%10;
        i1/=10;
        }
        for(d=1;d<=sqrt(i);++d)
        {
            if(i%d==0)
            k=k+2;
            if(d==sqrt(i))
            --d;
        }
          for(d=1;d<=sqrt(nr);++d)
        {
            if(nr%d==0)
            k1=k1+2;
            if(d==sqrt(nr))
            --d;
        }
        if(k1>k)
        {k2++;
        if(i>max)
        max=i;
        if(i<min)
        min=i;
        }
    }
    cout<<k2<<" "<<min<<" "<<max<<" ";
    return 0;
}
