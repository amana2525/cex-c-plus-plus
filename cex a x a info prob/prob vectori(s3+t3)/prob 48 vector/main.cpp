#include <iostream>

using namespace std;

int main()
{
    int x[1001],y,i,n;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    if(n%2==1)
    y=(n+1)/2;
    else
    y=n/2;
    do
    {ok=false;
    for(i=1;i<y;++i)
    if(x[i]>x[i+1])
    {swap(x[i],x[i+1]);
     ok=true;
    }
    }
    while(ok);
    do
    {ok=false;
    for(i=y;i<n;++i)
    if(x[i]<x[i+1])
    {swap(x[i],x[i+1]);
     ok=true;
    }
    }
    while(ok);
    for(i=1;i<=n;++i)
        cout<<x[i]<<" ";
    return 0;
}
