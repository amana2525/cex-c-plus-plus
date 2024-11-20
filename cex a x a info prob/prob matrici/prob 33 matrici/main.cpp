#include <iostream>

using namespace std;

int main()
{
    int x[100][100],i,m,n,j,ok,k=-1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { ok=1;
        for(j=1;j<=m;++j)
        {
            cin>>x[i][j];
            if(i>1)
            {if(x[i][j]!=x[i-1][j])
            ok=0;
            }
        }
        if(ok==1)
            ++k;
    }
    cout<<k;
    return 0;
}
