#include <iostream>
using namespace std;
int main()
{
    int x[1001],i,n,max=-100,min=1001;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
    if(x[i]>max)
    max=x[i];
    if(x[i]<min)
    min=x[i];}
    cout<<max<<" "<<min;
return 0;
}