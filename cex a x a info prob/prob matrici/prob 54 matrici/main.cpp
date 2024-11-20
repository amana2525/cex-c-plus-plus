#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,min,x[100][100];
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
    {   min=10000;
        for(i=1;i<=n;++i)
        if(x[i][j]<min)
        min=x[i][j];
        x[n+1][j]=min;
    }
    for(j=1;j<=m;++j)
        cout<<x[n+1][j]<<" ";
    return 0;
}
