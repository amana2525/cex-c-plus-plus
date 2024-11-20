#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,x[100][100],ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    cin>>x[i][j];
    do{
        ok=0;
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    {
        if(x[i][j]==0)
       { for(i=1;i<=n;++i)
         x[i][j]=1-x[i][j];
        for(j=1;j<=m;++j)
        x[i][j]=1-x[i][j];
        ok=1;
       }
    }
    }while(ok);
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    cout<<x[i][j];
    return 0;
}
