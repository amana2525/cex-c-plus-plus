#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int x[100][100],m,n,i,j,di[8]={-1,-1,-1,0,1,1,0},dj[8]={-1,0,1,1,1,0,-1},ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=0;j<=m+1;++j)
        x[0][j]=INT_MIN-1;
    for(i=0;i<=n+1;++i)
        x[i][0]=INT_MIN-1;
    for(i=1;i<=n;++i)
    { for(j=1;j<=m;++j)
        { ok=1;
          for(int k=0;k<8;++k)
          {int iv=i+di[k];
           int jv=j+dj[k];
           if(x[i][j]<x[iv][jv])
            ok=0;
          }
          if(ok==1)
            cout<<x[i][j]<<" ";
        }

    }
    return 0;
}
