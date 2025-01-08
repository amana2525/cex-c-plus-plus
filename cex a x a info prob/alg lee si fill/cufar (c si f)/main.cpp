#include <iostream>
#include <fstream>
using namespace std;
ifstream f("cufar.in");
ofstream g("cufar.out");
int main()
{
    int p,n,ok,k,a,d,d1,sd,s=0,i;
    f>>p>>n;
    if(p==1)
    {f>>a>>k;
     while(k)
     {for(d=2;d<=a/2;++d)
      {if(a%d==0)
       {ok=1;
        for(d1=2;d1<=d/2;++d1)
        if(d%d1==0)
        ok=0;
        if(ok==1)
        {--k;
        sd=d;
        }
       }
      }
     }
     g<<sd;
    }
    else
    { for(i=1;i<=n;++i)
      { f>>a>>k;
       while(k)
      {for(d=2;d<=a/2;++d)
      {if(a%d==0)
       {ok=1;
        for(d1=2;d1<=d/2;++d1)
        if(d%d1==0)
        ok=0;
        if(ok==1)
        {--k;
        sd=d;
        }
        s+=sd;
       }
      }
      }
      }
     g<<s;
    }
    return 0;
}
