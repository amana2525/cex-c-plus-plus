#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],ok,k=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {ok=1;
     for(j=1;j<=m;++j)
     {  cin>>x[i][j];
        if(j!=1)
        if(x[i][j]==x[i][j-1])
            ok=1;
        else
            {ok=0; continue;}
     }
     if(ok==1)
        ++k;
    }
    cout<<k;
    return 0;
}
