#include <iostream>

using namespace std;

int main()
{
    int n,i,x[1001],d,ok,maxval=-10,max;
    cin>>n;
    for(i=1;i<=n;++i)
    { cin>>x[i];
      ok=1;
      for(d=2;d<=x[i]/2;++d)
      if(x[i]%d==0)
      ok=0;
      if(ok==1)
      {max=x[i];
      maxval=i;}
    }
    x[maxval]=0;
    for(i=1;i<=n;++i)
    {cout<<x[i]<<" ";
    }
    return 0;
}
