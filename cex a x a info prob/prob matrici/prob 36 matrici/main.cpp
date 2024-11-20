#include <iostream>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,ok=1,i1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            cin>>x[i][j];
        }

    }

    for(j=1;j<=m;++j)
    {
        ok=1;
        do
        {ok=0;
         for(i1=1;i1<n;++i1)
         if(x[i1][j]<x[i1+1][j])
         {swap(x[i1][j],x[i1+1][j]);
          ok=1 ;
         }
        }
        while(ok==1);
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
            cout<<x[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
