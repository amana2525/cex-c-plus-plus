#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],nrel,s=0,a,b;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    cin>>nrel;
    for(i=1;i<=nrel;++i)
    {cin>>a>>b;
     s+=x[a][b];
    }
    cout<<s;
    return 0;
}
