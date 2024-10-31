
#include <iostream>
using namespace std;
int main()
{
    int x[1001],n,i,min=1000,max,s=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x[i];
        if(x[i]%2==0 && i<=min)
        min=i;
        if(x[i]%2==0)
        max=i;
    }
    for(i=min;i<=max;++i)
   s=s+x[i];
cout<<s;
return 0;
}