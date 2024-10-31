#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,n,ok,x[1001],d,i1,k;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {ok=1;
     for(d=2;d<=sqrt(x[i]);++d)
     if(x[i]%d==0)
     ok=0;
     if(ok==1)
     {k=i;
      for(i1=k;i1<n;++i1)
       x[i1]=x[i1+1];
       --n;
     }
    }
    for(i=1;i<=n;++i)
    cout<<x[i]<<" ";
    return 0;
}
