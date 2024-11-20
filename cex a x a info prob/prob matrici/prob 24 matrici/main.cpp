#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],min,max=-1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {cin>>x[i][j];
         if(x[i][j]>max)
         max=x[i][j];
        }
    }
     for(j=1;j<=m;++j)
    { min=100000;
        for(i=1;i<=n;++i)
        {if(x[i][j]<min)
        min=x[i][j];
        }
      x[0][j]=min;
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {if(x[i][j]==max)
         x[i][j]=x[0][j];
         cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
