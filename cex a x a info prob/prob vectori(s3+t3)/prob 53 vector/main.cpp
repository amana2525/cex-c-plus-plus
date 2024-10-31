#include <iostream>

using namespace std;

int main()
{
    int n,i,x[1001],t[1001],t1[1001],i1=0,i2=0;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    }
    for(i=1;i<=n;++i)
    {if(x[i]%2==0)
     {i1++;
      t[i1]=x[i];
     }
     else
      {i2++;
      t1[i2]=x[i];
     }
    }
    do
    {ok=false;
     for(i=1;i<i1;++i)
     { if(t[i]>t[i+1])
       {swap(t[i],t[i+1]);
        ok=true;
       }
      }
    }
    while(ok);
    do
    {ok=false;
     for(i=1;i<i2;++i)
     { if(t1[i]<t1[i+1])
       {swap(t1[i],t1[i+1]);
        ok=true;
       }
      }
    }
    while(ok);
    int ind1=1,ind2=1;
    for(i=1;i<=n;++i)
    if(x[i]%2==0)
    cout<<t[ind1++]<<" ";
    else
    cout<<t1[ind2++]<<" ";
    return 0;
}
