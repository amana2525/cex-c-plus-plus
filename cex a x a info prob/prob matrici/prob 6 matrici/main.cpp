#include <iostream>

using namespace std;

int main()
{
    int n,m,i,i1,i2,i3,x[100][100],v1[100],v2[100],j,ok=1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {i1=0;
     i2=0;
    for(j=1;j<=m;++j)
     {cin>>x[i][j];
      if(x[i][j]%2==0)
      {i1++;
       v1[i1]=x[i][j];
      }
      else
      {i2++;
       v2[i2]=x[i][j];
      }
     }
     do
    {ok=0;
    for(i3=1;i3<i1;i3++)
        if(v1[i3]>v1[i3+1])
        {swap(v1[i3],v1[i3+1]);
         ok=1;
        }
    }
    while(ok);

    do
    {ok=0;
    for(i3=1;i3<i2;i3++)
        if(v2[i3]>v2[i3+1])
        {swap(v2[i3],v2[i3+1]);
         ok=1;
        }
    }
    while(ok);
    for(i3=1;i3<=i1;i3++)
        cout<<v1[i3]<<" ";
    for(i3=1;i3<=i2;++i3)
        cout<<v2[i3]<<" ";
    }
    return 0;
}
