#include <iostream>

using namespace std;

int main()
{
    int x[1001],y[1001],i,n,b;
    bool ok;
    cin>>n>>b;
    for(i=1;i<=b;++i)
        cin>>y[i];
    for(i=b+1;i<=n;++i)
        cin>>x[i];
    do
    {ok=false;
    for(i=1;i<b;++i)
    {if(y[i]<y[i+1])
    {swap(y[i],y[i+1]);
    ok=true;}
    }
    }
    while (ok);
    do
    {ok=false;
    for(i=b+1;i<n;++i)
    {if(x[i]<x[i+1])
    {swap(x[i],x[i+1]);
    ok=true;}
    }
    }
    while (ok);
     for(i=1;i<=b;++i)
        cout<<y[i];
    for(i=b+1;i<=n;++i)
        cout<<x[i]<<" ";
    while (ok);
    return 0;
}
