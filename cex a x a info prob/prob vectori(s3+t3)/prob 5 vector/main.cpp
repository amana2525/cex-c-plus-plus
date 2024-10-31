#include <iostream>
using namespace std;
int main()
{
    int x[1001],i,n;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {if(i==n)
    cout<<x[i]<<" ";
    else
     {cout<<x[i]<<" ";
     cout<<x[n]<<" ";}
     --n;
    }

return 0;
}
