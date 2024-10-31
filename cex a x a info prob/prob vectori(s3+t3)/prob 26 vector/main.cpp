#include <iostream>

using namespace std;

int main()
{
    int n,x[1001],i;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(i=1;i<=n;++i)
    {cout<<x[i]<<" ";
        if(x[i]%2==0)
        cout<<x[i]*2<<" ";
    }
    return 0;
}
