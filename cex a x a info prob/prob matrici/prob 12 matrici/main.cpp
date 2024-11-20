#include <iostream>

using namespace std;

int main()
{
    int x[100][100],n,m,i,a,j,ok=0;
    cin>>n>>m>>a;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    { if(x[i][1]==a)
        ok=1;
      if(x[i][m]==a)
        ok=1;
    }
    for(j=1;j<=m;++j)
    { if(x[1][j]==a)
        ok=1;
      if(x[n][j]==a)
        ok=1;
    }
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
