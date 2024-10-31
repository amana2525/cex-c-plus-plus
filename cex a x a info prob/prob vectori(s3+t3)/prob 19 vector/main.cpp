#include <iostream>

using namespace std;

int main()
{
    int x[1001],n,i,k;
    cin>>n>>k;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=k;i<=n;++i)
    x[i]=x[i+1];
    for(i=1;i<n;++i)
        cout<<x[i]<<" ";
    return 0;
}
