#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,k,k1=0,x[100][100],ndi,ndj,ok;
    int di[8]={-1,0,1,-1,1,-1,0,1};
    int dj[8]={-1,-1,-1,0,0,1,1,1};
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=0;i<=n+1;++i)
    { x[i][0]=2;
      x[i][m+1]=2;
    }
    for(j=0;j<=m+1;++j)
    { x[0][j]=2;
      x[n+1][j]=2;
    }
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
         { ok=1;
            for(k=0;k<=7;++k)
           {ndi=di[k]+i;
            ndj=dj[k]+j;
            if(x[ndi][ndj]%2==1)
            ok=0;
           }
           if(ok==1)
            ++k1;
         }
    cout<<k1;
    return 0;
}
