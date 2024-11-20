#include <iostream>

using namespace std;

int main()
{
    int x[100][100],v[100],m,n,i,j,ok,maxi=-1000,i1,a;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {ok=0;
    for(j=1;j<=m;j++)
    {cin>>x[i][j];
     if(x[i][j]==0)
        ok++;
    }
    if(ok>maxi)
    {i1=1;
     v[i1]=i;
     maxi=ok;
    }
    else if(ok==maxi)
    {i1++;
     v[i1]=i;
    }
    }
    for(a=1;a<=i1;a++)
        cout<<v[a]<<" ";
    return 0;
}
