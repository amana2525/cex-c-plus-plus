#include <iostream>

using namespace std;

int main()
{
    int n,s=0,i,rm;
    cin>>n;
    for(i=3;i<=n;++i)
    {if(i%2==0)
     rm=i/2-1;
     else
     rm=(i-1)/2;
     s=s+rm;
    }
    cout<<s;
    return 0;
}
