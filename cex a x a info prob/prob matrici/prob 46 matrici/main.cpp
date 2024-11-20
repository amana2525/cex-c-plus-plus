#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,k=0,x[100][100],ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
    {   ok=1;
        for(i=1;i<=n;++i)
        {
         if(x[i][j]!=0)
            ok=0;
        }
        if(ok==1)
            ++k;
    }
    cout<<k;
    return 0;
}
