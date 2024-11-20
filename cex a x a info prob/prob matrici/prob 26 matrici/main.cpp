#include <iostream>
using namespace std;
int main()
{
    int n,x[100][100],v[100],i,j,s=0,min=1000,i1;
    cin>>n;
    for(i=1;i<=n;++i)
    {for(j=1;j<=n;++j)
    {cin>>x[i][j];
    if(x[i][j]<min)
    {min=x[i][j];
    for(i1=1;i1<=100;i1++)
    v[i1]=0;
    v[j]=1;
    }
    else if(x[i][j]==min)
    {v[j]=1;
    }
    }
    }
    for(j=1;j<=n;++j)
    {if(v[j]==1)
    for(i=1;i<=n;++i)
     x[i][j]=min;
    }
    for(i=1;i<=n;++i)
    {for(j=1;j<=n;++j)
    cout<<x[i][j]<<" ";
    cout<<endl;
    }
return 0;
}
