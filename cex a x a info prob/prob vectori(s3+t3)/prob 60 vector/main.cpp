#include <iostream>

using namespace std;

int main()
{
    int x[1001],i,n,k=0;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    do
    {ok=false;
    for(i=1;i<n;++i)
    {if(x[i]>x[i+1])
    {swap(x[i],x[i+1]);
    ok=true;}
    }
    }
    while (ok);
    for(i=1;i<n;++i)
    k=k+x[i+1]-x[i];
    cout<<k;
    return 0;
}
