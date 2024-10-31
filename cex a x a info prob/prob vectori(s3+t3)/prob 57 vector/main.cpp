#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[1001],n,p,i,d,k=0,k1;
    cin>>n>>p;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(d=1;d<=sqrt(x[p]);++d)
    {if(x[p]%d==0)
    k=k+2;
    if(d==sqrt(x[p]))
    --k;
    }
    cout<<k;
    for(i=1;i<=n;++i)
    { k1=0;
    if(i!=p)
    for(d=1;d<=sqrt(x[i]);++d)
    {if(x[i]%d==0)
    k1=k1+2;
    if(d==sqrt(x[p]))
    --k1;
    }
    if(k1==k)
    cout<<x[i]<<" ";
    }
    return 0;
}
