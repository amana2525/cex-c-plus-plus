#include <iostream>

using namespace std;

int main()
{
    int n,x[1001],t[1001],v[1001]={0},i,i1=0,y;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    y=x[n];

     for(i=2;i<n;++i)
     { if(x[i]!=y)
       {++i1;
       v[i]=1;
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
    for(i=1;i<=n;++i)
    {if(v[i]!=0)
     cout<<t[ind++]<<" ";
     else
     cout<<x[i]<<" ";
    }
    return 0;
}
