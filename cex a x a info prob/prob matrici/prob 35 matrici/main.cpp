#include <iostream>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,ok=1,j1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            cin>>x[i][j];
        }
        ok=1;
        do
        {ok=0;
         for(j1=1;j1<m;++j1)
         if(x[i][j1]>x[i][j1+1])
         {swap(x[i][j1],x[i][j1+1]);
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
