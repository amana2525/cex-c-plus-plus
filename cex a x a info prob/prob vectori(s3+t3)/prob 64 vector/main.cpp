#include <iostream>

using namespace std;

int main()
{
    int x[1001],min,max,i1,m,a,y[1001],s=0,i,n,b;
    bool ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {min=11;
     max=-1;
     s=0;
     for(i1=1;i1<=m;++i1)
     {cin>>a;
      s=s+a;
      if(a>max)
        max=a;
      if(a<min)
        min=a;
     }
     s=s-max-min;
     x[i]=s/(m-2);
    }
    do
    {ok=false;
    for(i=1;i<n;++i)
    {if(x[i]<x[i+1])
    {swap(x[i],x[i+1]);
    ok=true;}
    }
    }
    while (ok);
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    return 0;
}
