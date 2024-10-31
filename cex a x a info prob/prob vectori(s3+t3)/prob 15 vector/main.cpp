#include <iostream>

using namespace std;

int main()
{
    int n,i,x[1001],k2=-1,k,k1,i1;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(i=1;i<=n/2;++i)
    {k=n-i+1;
    if(k==i)
    continue;
     k1=k%100/10;
     i1=i%100/10;
     if(i1==k1)
     ++k2;
    }
    cout<<k2;
    return 0;
}
