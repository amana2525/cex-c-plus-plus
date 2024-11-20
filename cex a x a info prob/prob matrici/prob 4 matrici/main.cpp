#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x[100][100],i,n,m,j,s=0,ok,d,l;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
    {cin>>x[i][j];
    l=0;
     if(i%2==0)
     {ok=1;
      for(d=2;d<=sqrt(x[i][j]);++d)
      if(x[i][j]%d==0)
      ok=0;
      if(ok==1)
      {cout<<x[i][j]<<" ";
      l=1;
      }
     }
    }
    if(i%2==0 && l==1)
    cout<<endl;
    }
    return 0;
}
