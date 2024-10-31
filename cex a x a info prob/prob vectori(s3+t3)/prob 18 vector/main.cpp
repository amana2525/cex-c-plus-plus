#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,x[1001],j,d,k=0,s1,i1,j1,s2;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            s1=0;
            s2=0;
            i1=x[i];
            j1=x[j];
            while(i1)
            {s1=s1+i1%10;
             i1/=10;
            }
            while(j1)
            {s2=s2+j1%10;
             j1/=10;
            }
            if(s1==s2)
             ++k;

        }
    }
    cout<<k;
    return 0;
}
