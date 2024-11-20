#include <iostream>

using namespace std;

int main()
{
    int n,m,k,i,j,x[100][100],ok,s=0;
    cin>>n>>m>>k;
    for(i=1;i<=n;++i)
    {
       for(j=1;j<=m;++j)
        {cin>>x[i][j];
        }
    }
    for(j=1;j<=m;++j)
    {  ok=0;
      for(i=1;i<=n;++i)
      { if(x[i][j]==k)
        ok=1;
      }
       if(ok==1)
       s+=j;
    }
    cout<<s;
    return 0;
}
