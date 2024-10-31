#include <iostream>
using namespace std;
int main()
{
    int x[1001],i,n,max=-100,min=1001,maxval,minval;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    if(x[i]>max)
    {max=x[i];
    maxval=i;
    }
    if(x[i]<min)
    {min=x[i];
    minval=i;
    }
    }
    if(minval>maxval)
    swap(minval,maxval);
    for(i=minval;i<=maxval;++i)
    {
     cout<<x[i]<<" ";   
    }
return 0;
}