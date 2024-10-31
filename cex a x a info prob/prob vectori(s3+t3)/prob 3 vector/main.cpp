#include <iostream>

using namespace std;

int main()
{
    int x[1001],a,n,b,i;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    }
    a=x[n];
    for(i=1;i<n;++i)
    {b=x[i];
     if(b%a==0)
     {cout<<b<<" ";}
    }

    return 0;
}
