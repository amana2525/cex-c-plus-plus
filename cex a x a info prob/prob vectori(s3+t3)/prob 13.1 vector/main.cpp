#include <iostream>

using namespace std;

int main()
{
    int  n,x[1001],i,k,k1,i1,k2=0;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(i=1;i<=n/2;++i)
    { k=n-i+1;
    if(k==i)
    break;
    i1=x[i];
    k1=x[k];
    while(k1!=i1)
    {if(k1>i1)
        k1=k1-i1;
    else
        i1=i1-k1;
    }
    if(i1==1)
    ++k2;
    }
    cout<<k2;
    return 0;
}
