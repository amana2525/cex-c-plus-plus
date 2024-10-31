#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,n,min=10000,x[1001];
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {if(x[i]<min)
     min=x[i];
    }
    for(i=1;i<=n;++i)
    {if(x[i]==min)
    cout<<x[i]<<" ";
    cout<<x[i]<<" ";
    }
    return 0;
}
