#include <iostream>

 const int di[4]={-1,0,0,1}, dj[4]={0,-1,1,0};
 int n,m,x[100][100],p,u,i,j;
 struct cell
 {int l,c;
 }C[150];
 using namespace std;
int main()
{
    int ni,nj,k;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    {x[i][0]=-1;
     x[i][m+1]=-1;
    }
    for(j=1;j<=m;++j)
    {x[0][j]=-1;
     x[n+1][j]=-1;
    }
    u=1;
    p=1;
    C[p].l=1;
    C[p].c=1;
    x[C[p].l][C[p].c]=1;
    while(p<=u)
    {
        for(k=0;k<4;++k)
        { ni=C[p].l+di[k];
          nj=C[p].c+dj[k];

          if(x[ni][nj]==0&&ni>=1&&ni<=n&&nj>=1&&nj<=m)
          { u++;
            C[u].l=ni;
            C[u].c=nj;
            x[ni][nj]=x[C[p].l][C[p].c]+1;
          }
         }
         ++p;
    }
    for(i=1;i<=n;++i)
     {  for(j=1;j<=m;++j)
        cout<<x[i][j]<<" ";
        cout<<endl;
     }
   return 0;
}
