#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,x[1001],j,d,k=0,s1,s2;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            s1=0;
            s2=0;
            for(d=1;d<=sqrt(x[i]);++d)
            {if(x[i]%d==0)
               {s1+=d;
                s1+=x[i]/d;}
               if(d==sqrt(x[i]))
               s1-=d;
            }
            for(d=1;d<=sqrt(x[j]);++d)
            {if(x[j]%d==0)
              {s2+=d;
                s2+=x[j]/d;}
               if(d==sqrt(x[j]))
               s2-=d;
            }
        if(s1==s2)
        ++k;

        }
    }
    cout<<k;
    return 0;
}
