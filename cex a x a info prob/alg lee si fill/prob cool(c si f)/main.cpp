#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cool.in");
ofstream fout("cool.out");
int main()
{
    int p,n,k,v[1000],ok,x[1000]={0},l=0,i,a,ap,max=0,m,n1;
    fin>>p>>n>>k;
    for(i=1;i<=n;++i)
    fin>>v[i];
    if(p==1)
    {
     do
     {ok=1;
      for(i=1;i<k;++i)
      if(v[i]>v[i+1])
      {swap(v[i],v[i+1]);
       ok=0;
      }
     }while(ok==0);
     ok=1;
     for(i=1;i<k;++i)
     { if(v[i]+1!=v[i+1])
       ok=0;
     }
     if(ok==1)
     fout<<v[k];
     else
     { for(i=1;i<=k;++i)
       {a=v[i];
        x[a]++;
       }
       for(i=1;i<=k;++i)
       {
        a=v[i];
        if(x[a]==1)
        l++;
       }
       fout<<l;
     }
    }
   else
    {for(m=1;m<=n;++m)
    {for(n1=n;n1>=m;--n1)
    {for(i=m;i<=n1;++i)
    {x[i]=v[i];}
    for(i=m;i<=n1;++i)
    {for(int j=i+1;j<=n1;++j)
    {if(x[i]>x[j])
    {swap(x[i], x[j]);
    }
    }
    }
    ok=1;
    for(i=m+1;i<=n1;++i)
    {if(x[i]!=x[i-1]+1)
    {ok = 0;
    break;
    }
    }
    if(ok==1)
    {if(n1-m+1>max)
    {max=n1-m+1;
     ap=1;
    }
    else if (n1-m+1==max)
    {ap++;
    }
    }
    }
    }
    fout<<max<<"\n"<<ap;
    }

    return 0;
}
