#include <iostream>

using namespace std;

int main()
{
    int x[1001],n,k=0,k1,i;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     if(x[i]%2==0)
     ++k;
    }
    k1=n-k;
    if(k>k1)
    cout<<k-k1;
    else
    cout<<k1-k;
    return 0;
}
