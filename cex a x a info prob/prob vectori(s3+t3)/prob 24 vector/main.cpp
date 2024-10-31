#include <iostream>

using namespace std;

int main()
{
    int n,i,x[1001],j;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {
        for(j=i+1;j<=n;++j)
            if(x[i]==x[j])
            x[j]=-100;
    }
    for(i=1;i<=n;++i)
    {
        if(x[i]!=-100)
            cout<<x[i]<<" ";
    }
    return 0;
}
