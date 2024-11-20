#include <iostream>

using namespace std;

int main()
{
    int x[100][100],i,j,ok,n,m,max=-1,min=1000;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        x[i][0]=1;
    for(j=1;j<=m;++j)
       x[0][j]=1;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {cin>>x[i][j];
        if(x[i][j]>max)
        max=x[i][j];
        if(x[i][j]<min)
        min=x[i][j];
        }
    }
     for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
        if(x[i][j]==max)
        {x[0][j]=0;
         x[i][0]=0;
        }
        if(x[i][j]==min)
        {x[0][j]=0;
         x[i][0]=0;
        }
        }
    }
    for(i=1;i<=n;++i)
    {
     for(j=1;j<=m;++j)
        { if(x[0][j]==1 && x[i][0]==1)
          cout<<x[i][j]<<" ";
          else
          cout<<"//";
        }
        cout<<endl;
    }
    return 0;
}
