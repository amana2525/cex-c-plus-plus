#include <iostream>

using namespace std;

int main()
{
    int x[100][100],m,n,i,i1,ok,j,s=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {s=0;
    for(j=1;j<=m;++j)
        {cin>>x[i][j];
         s+=x[i][j];
        }
    x[i][0]=s;
    x[i][m+1]=i;
    }
    do
    {ok=0;
    for(i=1;i<n;i++)
        if(x[i][0]>x[i+1][0])
        {swap(x[i][0],x[i+1][0]);
         swap(x[i][m+1],x[i+1][m+1]);
         ok=1;
        }
    }
    while(ok);
    cout<<endl;
    for(i=1;i<=n;++i)
    {i1=x[i][m+1];
     for(j=1;j<=m;++j)
        cout<<x[i1][j]<<" ";
     cout<<endl;
    }
    return 0;
}
