#include <iostream>

using namespace std;

int main()
{
    int n,i,x[1001],s=0,k=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    s=s+x[i];
    }
    float ma=s/n;
    for(i=1;i<=n;++i)
    {if(x[i]>ma)
    ++k;
    }
    cout<<k;
    return 0;
}
