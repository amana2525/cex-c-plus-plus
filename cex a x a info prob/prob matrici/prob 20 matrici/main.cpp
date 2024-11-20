#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,x[100][100],a,max=-1,ok,v[100],i1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { ok=0;
      for(j=1;j<=m;++j)
      {cin>>x[i][j];
       a=x[i][j];
       if(a%2==0)
        ok++;
      }
      if(ok>max)
      {i1=1;
      max=ok;
       v[i1]=i;
      }
      else if(ok==max)
      {i1++;
       v[i1]=i;
      }
    }
    for(i=1;i<=i1;++i)
        cout<<v[i]<<" ";
    return 0;
}
