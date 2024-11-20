#include <iostream>

using namespace std;

int main()
{
    int n,m,x[100][100],i,j,k,ok,k1=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
          cin>>x[i][j];
    for(i=1;i<=n;++i)
    {
        for(k=i+1;k<=n;++k)
        {   ok=1;
            for(j=1;j<=m;++j)
            {
                if(x[i][j]!=x[k][j])
                    ok=0;
            }
            if(ok==1)
                ++k1;
        }
    }
    cout<<k1;
    return 0;
}
