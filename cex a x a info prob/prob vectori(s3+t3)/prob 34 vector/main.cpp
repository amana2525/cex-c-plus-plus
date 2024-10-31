#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,i1=0,ok1,d,k,x[1001],v[1001];
    bool ok=false;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     ok1=1;
     k=0;
     for(d=2;d<=sqrt(x[i]);++d)
        if(x[i]%d==0)
        {k=k+2;
         if(sqrt(x[i])==d)
            --k;
        }
    v[i]=k;
    }
    do
    { ok=true;
    for(i=1;i<n;++i)
     if(v[i]>v[i+1])
        {swap(v[i],v[i+1]);
         swap(x[i],x[i+1]);
        ok=false;}
    }
    while(ok!=true);
    for(i=1;i<=n;++i)
        cout<<x[i]<<" ";
    return 0;
}
