#include <iostream>

using namespace std;

int main()
{
    int x[1001],n,i,k;
    bool ok=false;
    cin>>n>>k;
    for(i=1;i<=n;++i)
    cin>>x[i];
    do
    {ok=false;
    for(i=1;i<n;++i)
    if(x[i]>x[i+1])
    {swap(x[i],x[i++]);
    ok=true;
    }
    }
    while(ok);
    x[(n+1)/2]++;
    k--;
    cout<<x[(n+1)/2];
    return 0;
}
