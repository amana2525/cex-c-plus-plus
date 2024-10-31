#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,x[1001],k;
    bool ok=false;
    cin>>n>>k;
    for(i=1;i<=n;++i)
    cin>>x[i];
    do
    { ok=true;
    for(i=1;i<k;++i)
     if(x[i]>x[i+1])
        {swap(x[i],x[i+1]);
        ok=false;}
    }
    while(ok!=true);
       do
    { ok=true;
    for(i=k+1;i<n;++i)
     if(x[i]<x[i+1])
        {swap(x[i],x[i+1]);
        ok=false;}
    }
    while(ok!=true);
    for(i=1;i<=n;++i)
        cout<<x[i]<<" ";
    return 0;
}
