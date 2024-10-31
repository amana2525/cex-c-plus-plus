#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[1001],v[1001],v1[1001],t[1001],n,i,d,i1,i2,i3,max=-10,k;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     k=0;
     for(d=1;d<=sqrt(x[i]);++d)
     {if(x[i]%d==0)
      k+=2;
      if(d==sqrt(x[i]))
        --k;
     }
     v[k]++;
     v1[i]=k;
     if(k>max)
        max=k;
    }
    k=0;
    for(i=1;i<=max;++i)
    {if(v[i]>0)
    k++;
    }
    cout<<k<<endl;
    for(i=1;i<=max;++i)
    { i2=0;
      for(i1=1;i1<=n;i1++)
      if(v1[i1]==i)
      {++i2;
       t[i2]=x[i1];
      }
      do
      {ok=false;
       for(i3=1;i3<i2;++i3)
       {if(t[i3]>t[i3+1])
        {swap(t[i3],t[i3+1]);
         ok=true;
        }
       }
      }
      while(ok);
    if(i2!=0)
    cout<<i2<<" ";
    for(i1=1;i1<=i2;i1++)
    cout<<t[i1]<<" ";
    if(i2!=0)
    cout<<" "<<endl;
    }
    return 0;
}
