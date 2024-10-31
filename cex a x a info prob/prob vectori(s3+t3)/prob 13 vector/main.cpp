#include <iostream>

using namespace std;

int main()
{
    int n,x[1001],i,s=0,s1=0,s2=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
        if(x[i]%2==0)
            s+=x[i];
        if(i%2==0)
            s1+=x[i];
        if(x[i]%10==0)
            ++k;
        if(x[i]%3==0 && i%2==1)
            s2=s2+x[i];
    }
    for(i=n;i>=1;--i)
    cout<<x[i]<<" ";
    cout<<s<<" "<<s1<<" "<<k<<" "<<s2;
    return 0;
}
