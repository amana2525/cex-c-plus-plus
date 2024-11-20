#include <iostream>

using namespace std;

int main()
{
    int n,m,x[100][100],i,j;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
     {for(i=n;i>=1;--i)
        cout<<x[i][j]<<" ";
      cout<<endl;
     }
    return 0;
}
