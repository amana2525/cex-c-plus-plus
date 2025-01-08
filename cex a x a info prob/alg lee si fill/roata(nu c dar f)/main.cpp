#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("roata.in");
ofstream fout("roata.out");

int main()
{
    int n,p,i,v[1000],s1,s=0,min,k,a[1000],ok,b,xf;
    fin>>n>>p;
    for(i=1;i<=p;++i)
    {fin>>v[i];
     s+=v[i];
    }
    s1=n*(n-1)/2;
    fout<<s<<endl;
    if(p>n)
    { b=1;
      ok=0;
      do
      {min=9999;
       k=0;
      for(i=1;i<=n;++i)
       { a[i]=i;
         xf=i;
         if(v[i]==0 && n+b<=p)
         { fout<<a[i]<<" ";
           v[i]=v[n+b];
           b++;
           a[i]=n+b;
         }
         else if(v[i]==0 && n+b>p)
         { fout<<a[i]<<" ";
         }
         if(v[i]<min && v[i]!=-1)
        min=v[i];
       }
       for(i=1;i<=n;++i)
       {v[i]-=min;
       }
      }while(ok==0);
      fout<<endl;
    }
    else
    { for(i=1;i<=p;++i)
      a[i]=i;
      do
      { ok=1;
        for(i=1;i<p;++i)
        { if(v[i]>v[i+1])
          {swap(v[i],v[i+1]);
           swap(a[i],a[i+1]);
           ok=0;
          }
        }
      }while(ok==0);
      for(i=1;i<=p;++i)
      fout<<a[i]<<" ";
    }
    fout<<xf;
    return 0;
}
