25.
#include <iostream>
using namespace std;
int main()
{
    int n,x[100][100],v[100],i,j,s=0;
    cin>>n;
    for(i=1;i<=n;++i)
    for(j=1;j<=n;++j)
    cin>>x[i][j];

    for(j=1;j<=n;++j)
    {s=0;
    for(i=1;i<=n;++i)
    s+=x[i][j];
    v[j]=s/n;
    }
    for(i=1;i<=n/2;++i)
    {for(j=1;j<=n;++j)
    cout<<x[i][j]<<" ";
        cout<<endl;
    }

    for(i=1;i<=n;++i)
    cout<<v[i]<<" ";
    cout<<endl;

     for(i=n/2;i<=n;++i)
    {for(j=1;j<=n;++j)
    cout<<x[i][j]<<" ";
    cout<<endl;
    }
    return 0;
}
