#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],ok,k=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
    {   ok=1;
        for(i=1;i<n;++i)
        { if(x[i][j]!=x[i+1][j])
          {ok=0;
           break;
          }
        }
        if(ok==1)
        ++k;
    }
    cout<<k;
    return 0;
}
