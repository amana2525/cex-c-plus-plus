#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,ok,d,k=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
        {cin>>x[i][j];
         if(j%2==1)
         {ok=1;
          for(d=2;d<=x[i][j]/2;++d)
            if(x[i][j]%d==0)
            ok=0;
          if(ok==1)
          ++k;
         }
        }
    }
    cout<<k;
    return 0;
}
