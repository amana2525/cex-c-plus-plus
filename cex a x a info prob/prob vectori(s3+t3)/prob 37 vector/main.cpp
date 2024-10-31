#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,i1,i2=0,ok1,d,x[1001],t[1001];
    bool ok=false;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>x[i];
    for(i=1;i<=n;++i)
    {
     ok1=x[n];
     i1=x[i];
     while(ok1!=i1)
     if(ok1>=i1)
        ok1-=i1;
     else
        i1-=ok1;
     if(ok1==1)
    {i2++;
     t[i2]=x[i];
     }
    }
    do
    { ok=true;
    for(i=1;i<i2;++i)
     if(t[i]>t[i+1])
        {swap(t[i],t[i+1]);
        ok=false;}
    }
    while(ok!=true);
    for(i=1;i<=i2;++i)
        cout<<t[i]<<" ";
    return 0;
}
