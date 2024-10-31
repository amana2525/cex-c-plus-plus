#include <iostream>

using namespace std;

int main()
{
    int x[1001],n,i,nr1=0,nr2=0,nr3=0,w=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {cin>>x[i];
     if(x[i]==1)
        ++nr1;
     else if(x[i]==2)
        ++nr2;
     else
        ++nr3;
    }
    for(i=1;i<=nr1;++i)
    if(x[i]!=1)
    ++w;
    for(i=nr1+1;i<=nr2+nr1;++i)
    if(x[i]!=3)
    ++w;
    for(i=nr1+nr2+1;i<=n;++i)
    if(x[i]!=3)
    ++w;
    if(w%2==0)
    cout<<w/2<<" schimbari";
    else
    cout<<(w+1)/2<<" schimbari";
    return 0;
}
