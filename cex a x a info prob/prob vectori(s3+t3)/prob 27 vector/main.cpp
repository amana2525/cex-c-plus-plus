#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x[1001],i;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(i=1;i<=n;++i)
    {  double k=sqrt(x[i]);
       if(k==int(k))
        cout<<k<<" ";
        cout<<x[i]<<" ";
    }
    return 0;
}
