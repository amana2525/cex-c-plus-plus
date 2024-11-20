#include <iostream>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,i1,i2,min1=1000,min=1000;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];

    for(i=1;i<=n;++i)
    {if(x[i][1]<min)
     {min=x[i][1];
      i1=i;
     }
     if(x[i][m]<min1)
     {min1=x[i][m];
      i2=i;
     }
    }
     for(i=1;i<=n;++i)
     {for(j=1;j<=m;++j)
        {if(i==i1 && j==1)
         cout<<min1<<" ";
         else if(i==i2 && j==m)
         cout<<min<<" ";
         else
         cout<<x[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
