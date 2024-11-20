#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],min,max;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { min=10000;
        for(j=1;j<=m;++j)
        {cin>>x[i][j];
        if(x[i][j]<min)
        min=x[i][j];
        }
      x[i][0]=min;
    }
    max=-100;
    for(i=1;i<=n;++i)
    {if(x[i][0]>max)
     max=x[i][0];
    }
    cout<<max;
    return 0;
}
