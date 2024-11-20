#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { for(j=1;j<=m;++j)
      cin>>x[i][j];
    }
    do
    { ok=0;
    for(j=1;j<m;j++)
    {
     if(x[1][j]>x[1][j+1])
     {
        for(i=1;i<=n;i++)
        swap(x[i][j],x[i][j+1]);
        ok=1;
     }
    }
    }
    while(ok);
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
        cout<<x[i][j]<<" ";
    cout<<endl;
    }
    return 0;
}
