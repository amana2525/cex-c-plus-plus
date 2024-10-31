#include <iostream>

using namespace std;

int main()
{
    int n,x[1001],i;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    }
    do
    {ok=false;
     for(i=1;i<n-1;++i)
     {if(i%2==0)
      {if(x[i]>x[i+2])
       {swap(x[i],x[i+2]);
        ok=true;
       }
      }
      else
      {if(x[i]<x[i+2])
       {swap(x[i],x[i+2]);
        ok=true;}
      }
     }
    }
    while(ok);
    for(i=1;i<=n;++i)
    cout<<x[i]<<" ";
    return 0;
}
