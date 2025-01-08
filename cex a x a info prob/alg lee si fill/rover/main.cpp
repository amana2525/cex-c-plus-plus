#include <iostream>
#include <fstream>
const int di[4]={-1,0,0,1}, dj[4]={0,-1,1,0};
int ni,nj,n,i,j;
struct cell
{ int l,c;
}C[2500];
int cond(int ni,int nj)
{ if(ni>=1&&ni<=n&&nj>=1&&nj<=n)
  return 1;
  else
  return 0;
}
using namespace std;
ifstream fin("rover.in");
ofstream fout("rover.out");
int main()
{
    int s=0,coef,a[500][500],x[500][500],cer,k,u,p,y;
    fin>>cer>>n;
    if(cer==1)
    fin>>coef;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
        fin>>a[i][j];
    for(i=1;i<=n;++i)
    { for(j=1;j<=n;++j)
      { if(a[i][j]<coef)
        x[i][j]=-1;
        else
        x[i][j]=0;
      }
    }
     for(i=0;i<=n+1;++i)
    {x[i][0]=-2;
     x[i][n+1]=-2;
    }
    for(j=0;j<=n+1;++j)
    {x[0][j]=-2;
     x[n+1][j]=-2;
    }
    u=1;
    p=1;
    C[p].l=1;
    C[p].c=1;
    x[C[p].l][C[p].c]=1;
    while(p<=u || (C[p].l==n && C[p].c==n))
    { y=0;
      for(k=0;k<4;++k)
        { ni=C[p].l+di[k];
          nj=C[p].c+dj[k];
          if(x[ni][nj]==0&&cond(ni,nj)==1)
          { u++;
            C[u].l=ni;
            C[u].c=nj;
            x[ni][nj]=x[C[p].l][C[p].c]+1;
          }
          else if(x[ni][nj]==-1&&cond(ni,nj)==1)
          {continue;
          }
        if(y==4)
        {
          for(k=0;k<4;++k)
          {ni=C[p].l+di[k];
           nj=C[p].c+dj[k];
           if(cond(ni,nj)==1)
           { u++;
            C[u].l=ni;
            C[u].c=nj;
            x[ni][nj]=x[C[p].l][C[p].c]+1;
           }
          }
        }
        }
         ++p;
    }
     if(cer==1)
     { s=0;
    i=n;
    j=n;
    while(i!=1||j!=1) 
    {
        for(k=0;k<4;++k) {
            ni=i+di[k];
            nj=j+dj[k];
            if(x[ni][nj]==x[i][j]-1) 
            {   if(a[ni][nj]<coef)
                s++;
                i=ni;
                j=nj;
                break;
            }
        }
    }
    fout<<s;
     }
     if(cer==2)
     { s=9999;
    i=n;
    j=n;
    while(i!=1||j!=1) 
    {
        for(k=0;k<4;++k) {
            ni=i+di[k];
            nj=j+dj[k];
            if(x[ni][nj]==x[i][j]-1) 
            {   if(a[ni][nj]<s)
                s=a[ni][nj];
                i=ni;
                j=nj;
                break;
            }
        }
    }
    fout<<s;
      }
      return 0;
}
why doesnt this code return anything