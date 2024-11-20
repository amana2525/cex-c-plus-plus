#include <iostream>

using namespace std;

int main()
{
    int n,m,x[100][100],i,j,a,v[100]={0};
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    { a=x[i][1];
      if(v[a]==0)
        cout<<a<<" ";
      v[a]=1;
      a=x[i][m];
      if(v[a]==0)
        cout<<a<<" ";
      v[a]=1;
    }
    for(j=1;j<=m;++j)
    { a=x[1][j];
      if(v[a]==0)
        cout<<a<<" ";
      v[a]=1;
      a=x[n][j];
      if(v[a]==0)
        cout<<a<<" ";
      v[a]=1;
    }

    return 0;
}
