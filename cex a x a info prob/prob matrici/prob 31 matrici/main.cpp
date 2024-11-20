#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x[100][100],i,j,m,n,d,ok,a;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            cin>>x[i][j];
        }
     ok=1;
     a=x[i][1];
     for(d=2;d<=sqrt(a);++d)
        if(a%d==0)
        ok=0;
     x[i][0]=ok;
    }
    for(i=1;i<=n;++i)
    {if(x[i][0]==1)
     for(j=m;j>=1;--j)
        cout<<x[i][j]<<" ";
     else
        for(j=1;j<=m;++j)
        cout<<x[i][j]<<" ";
     cout<<endl;
    }
    return 0;
}
