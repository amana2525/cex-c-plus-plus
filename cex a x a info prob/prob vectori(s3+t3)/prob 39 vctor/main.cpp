#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,x[1001],max=-1,maxval;
    bool ok=false;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    if(x[i]>max)
    {max=x[i];
     maxval=i;
    }
    }

    do
    { ok=true;
    for(i=1;i<maxval;++i)
     if(x[i]>x[i+1])
        {swap(x[i],x[i+1]);
        ok=false;}
    }
    while(ok!=true);
       do
    { ok=true;
    for(i=maxval+1;i<n;++i)
     if(x[i]<x[i+1])
        {swap(x[i],x[i+1]);
        ok=false;}
    }
    while(ok!=true);
    for(i=1;i<=n;++i)
        cout<<x[i]<<" ";
    return 0;
}
