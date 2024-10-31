#include <iostream>

using namespace std;

int main()
{
    int x[1001],t[1001],i,n,k=0;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     t[i]=x[i];
    }
    do
    {ok=false;
     for(i=1;i<n;++i)
     if(t[i]<t[i+1])
     {swap(t[i],t[i+1]);
      ok=true;
     }
    }
    while(ok);
    for(i=1;i<=n;++i)
    if(x[i]==t[i])
    ++k;
    cout<<k;
    return 0;
}
