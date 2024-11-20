#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n,m,i,j,ndi,ndj,di[8]={-1,-1,-1,0,0,1,1,1},dj[8]={-1,0,1,-1,1,-1,0,1},k,k1=0,x[100][100],ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=0;i<=n;++i)
    { x[i][0]=INT_MIN;
      x[i][m+1]=INT_MIN;
    }
    for(j=0;j<=m;++j)
    { x[0][j]=INT_MIN;
      x[n+1][j]=INT_MIN;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;++j)
        {  ok=1;
           for(k=0;k<8;++k)
           { ndi=di[k]+i;
             ndj=dj[k]+j;
             if(x[i][j]<x[ndi][ndj])
                {ok=0;
                break;}
           }
           if(ok==1)
           ++k1;
        }
    }
    cout<<k1;
    return 0;
}
