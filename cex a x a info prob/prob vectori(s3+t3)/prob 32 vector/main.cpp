#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,i1=0,ok1,d,x[1001],t[1001];
    bool ok=false;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    if(x[i]%10==0)
    {i1++;
     t[i1]=x[i];
     }
    }
    do
    { ok=true;
    for(i=1;i<i1;++i)
     if(t[i]<t[i+1])
        {swap(t[i],t[i+1]);
        ok=false;}
    }
    while(ok!=true);
    for(i=1;i<=i1;++i)
        cout<<t[i]<<" ";
    return 0;
}
