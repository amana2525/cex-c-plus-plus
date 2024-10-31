#include <iostream>

using namespace std;

int main()
{
    int i,n,k=0;
    float x[1001];
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x[i];
    }
    if(x[1]>x[n])
        swap(x[1],x[n]);
    for(i=1;i<=n;++i)
    {
        if(x[i]>=x[1] && x[i]<=x[n])
        k++;
    }
    cout<<n-k;
    return 0;
}
