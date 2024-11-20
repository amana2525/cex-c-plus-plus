#include <iostream>

using namespace std;

int main()
{
    int n,m,x[100][100],k,i,j;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    cin>>k;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        if(x[i][j]==k)
        cout<<i<<" "<<j;
    return 0;
}
