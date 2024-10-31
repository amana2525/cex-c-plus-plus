#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x[1001],t[1001],i1=0,i2=0,i;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     if(sqrt(x[i])==int(sqrt(x[i])))
     {i1++;
      t[i1]=x[i];
     }
    }
    do
    {ok=false;
     for(i=1;i<i1;++i)
     {if(t[i]>t[i+1])
      {swap(t[i],t[i+1]);
       ok=true;
      }
     }
    }
    while(ok);
    int ind=1;
    while(ok!=false);
    for(i=1;i<=n;++i)
    if(sqrt(x[i])==int(sqrt(x[i])))
    cout<<t[ind++]<<" ";
    else
    cout<<x[i]<<" ";
    return 0;
}
