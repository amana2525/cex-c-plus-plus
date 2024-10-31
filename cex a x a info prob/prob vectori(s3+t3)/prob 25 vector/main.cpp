#include <iostream>

using namespace std;

int main()
{
    int n,k,x[1001],val,i;
    cin>>n>>k>>val;
    for(i=1;i<=n;++i)
        cin>>x[i];
    for(i=1;i<=n;++i)
        if(i==k)
        cout<<val<<" ";
    else
        cout<<x[i]<<" ";
    return 0;
}
