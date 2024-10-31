#include <iostream>

using namespace std;

int main()
{
    int x[1001],y[1001],z[1001],t=1,t1=1,n,i;
    bool sor1=true,sor2=true;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    if(x[i]%2==0)
    {y[t]=x[i];
    ++t;
    }
    else
    {z[t1]=x[i];
    ++t1;
    }
    }

    do
    {sor1=true;
    for(i=1;i<=t;i++)
    if(y[i]>y[i+1])
    {swap(y[i],y[i+1]);
     sor1=false;
    }
    }
    while(!sor1);
    do
    {sor2=true;
    for(i=1;i<=t1;i++)
    if(z[i]>z[i+1])
    {swap(z[i],z[i+1]);
     sor2=false;
    }
    }
    while(!sor2);
    for(i=1;i<=t;++i)
    cout<<y[i]<<" ";
    for(i=1;i<=t1;++i)
    cout<<z[i]<<" ";
    return 0;
}
