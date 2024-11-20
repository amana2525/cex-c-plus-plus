#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,m,i,j,x[100][100],max[100]={0},maxap=0,maxin,ok,i1,i3,v[100];
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { for(j=1;j<=m;++j)
        {cin>>x[i][j];
         int a=x[i][j];
         max[a]++;
         if(max[a]>maxap)
        {maxap=max[a];
        maxin=a;
        i1=1;
        v[i1]=a;
        }
        else
        if(max[a]==maxap)
        {i1++;
        v[i1]=a;
        }
        }
    }
    do
    {ok=0;
    for(i3=1;i3<i1;i3++)
        if(v[i3]>v[i3+1])
        {swap(v[i3],v[i3+1]);
         ok=1;
        }
    }
    while(ok);
    for(i3=1;i3<=i1;++i3)
    cout<<v[i3]<<" ";
    return 0;
}
