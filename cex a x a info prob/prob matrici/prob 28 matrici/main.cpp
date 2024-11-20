#include <iostream>

using namespace std;

int main()
{
    int x[100][100],i,j,ok,n,m;
    cin>>n>>m;
    for(j=1;j<=m;++j)
       x[0][j]=1;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {cin>>x[i][j];
        if(x[i][j]==0)
        {x[0][j]=0;}
        }
    }

    for(i=1;i<=n;++i)
    {
     for(j=1;j<=m;++j)
        if(x[0][j]==1)
        cout<<x[i][j]<<" ";
     else
        cout<<" / ";
     cout<<endl;
    }
    return 0;
}
