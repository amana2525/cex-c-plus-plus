#include <iostream>

using namespace std;

int main()
{
    int n,x[1001],t[1001],v[1001],i1=0,i2=0,i;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     if(x[i]%2==0)
     {i1++;
      t[i1]=x[i];
     }
     else
     {i2++;
     v[i2]=x[i];
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
    while(ok!=false);
    do
    {ok=false;
     for(i=1;i<i2;++i)
     {if(v[i]>v[i+1])
      {swap(v[i],v[i+1]);
       ok=true;
      }
     }
    }
    while(ok!=false);
    for(i=1;i<=i1;++i)
        cout<<t[i]<<" ";
    for(i=1;i<=i2;++i)
        cout<<v[i]<<" ";
    return 0;
}
