#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,a,d,ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
     cin>>x[i][j];
     a=x[i][1];
     ok=1;
     for(d=2;d<=sqrt(a);++d)
        if(a%d==0)
        ok=0;
     x[i][0]=ok;
    }
    for(i=1;i<=n;++i)
    {if(x[i][0]==0)
     for(j=1;j<=m;++j)
        cout<<x[i][j]<<" ";
     cout<<endl;
    }
    return 0;
}
