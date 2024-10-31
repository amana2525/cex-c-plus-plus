#include <iostream>

using namespace std;

int main()
{
    int x[1001],i,n,j;
    bool ok=true;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    while(ok!=false)
    { ok=false;
    for(i=1;i<n;++i)
        if(x[i]%2==x[i+1]%2)
    {int m=(x[i]+x[i+1])/2;
    n++;
    for(j=n;j>i+1;--j)
        x[j]=x[j-1];
    x[i+1]=m;
    ok=true;
    }
    }
    for(i=1;i<=n;++i)
        cout<<x[i]<<" ";
    return 0;
}
