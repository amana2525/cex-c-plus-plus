#include <iostream>

using namespace std;

int main()
{
    int x[100][100],i,j,m,n,ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    ok=1;
    for(i=1;i<=n && ok;i++)
        for(j=1;j<=m/2;++j)
        if(x[i][j]!=x[i][m+1-j])
        ok=0;
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
