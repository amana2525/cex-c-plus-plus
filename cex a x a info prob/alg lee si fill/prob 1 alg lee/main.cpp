#include <iostream>

using namespace std;
int i,n,m,j,x[100][100],p,u;
struct celula
{int l,c;
}C[500];
int main()
{
    int di[4]={-1,0,0,1},dj[4]={0,-1,1,0},k,ndi,ndj;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    { x[i][0]=-1;
      x[i][m+1]=-1;
    }
    for(j=1;j<=m;++j)
    {
        x[0][j]=-1;
        x[n+1][j]=-1;
    }
    p=1;u=1;
    C[p].l=1;
    C[p].c=1;
    while(p<=u)
        { for(k=0;k<=3;++k)
           {ndi=C[p].l+di[k];
            ndj=C[p].c+dj[k];
            if(x[ndi][ndj]==0)
            { u++;
              C[u].l=ndi;
              C[u].c=ndj;
              x[ndi][ndj]=x[C[p].l][C[p].c]+1;
            }
           }
        }
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
        cout<<x[i][j]<<" ";
     cout<<endl;
    }
    return 0;
}
