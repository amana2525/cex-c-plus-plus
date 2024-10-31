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
    {if(x[i]%2==0)
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
