#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,x[1001],j,d,k,k1,k2=0;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            k=0;
            k1=0;
            for(d=1;d<=sqrt(x[i]);++d)
            {if(x[i]%d==0)
               k=k+2;
               if(d==sqrt(x[i]))
                --k;
            }
            for(d=1;d<=sqrt(x[j]);++d)
            {if(x[j]%d==0)
               k1=k1+2;
               if(d==sqrt(x[j]))
                --k1;
            }
        if(k==k1)
        ++k2;

        }
    }
    cout<<k2;
    return 0;
}
