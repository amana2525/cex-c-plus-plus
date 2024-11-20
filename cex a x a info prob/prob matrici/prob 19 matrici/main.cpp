#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],a,v[100]={0},s=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
    {cin>>x[i][j];
     a=x[i][j];
     v[a]++;
    }
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        { a=x[i][j];
          if(a%2==0 && v[a]>0)
          {s+=a;
           v[a]=0;
          }
        }
    cout<<s;
    return 0;
}
