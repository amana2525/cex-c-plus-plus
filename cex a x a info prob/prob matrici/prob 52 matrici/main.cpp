#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,x[100][100],p,max,v[100],i1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
    {  p=1;
        for(i=1;i<=n;++i)
        {p*=x[i][j];
        }
       if(p>max)
       {i1=1;
        v[i1]=j;
        max=p;
       }
       else if(p==max)
       {++i1;
        v[i1]=j;
       }
    }
    for(i=1;i<=i1;i++)
        cout<<v[i1]<<" ";
    return 0;
}
