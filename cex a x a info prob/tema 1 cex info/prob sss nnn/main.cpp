#include <iostream>

using namespace std;

int main()
{
    int S,n,ok=0,a;
    cin>>S;
    ok=0;
    n=1;
    while(n<=S)
    {
     while(ok!=1)
     {if((n*(n+1)/2)>=S)
     {
       a=S-(n*(n+1)/2);
       if(a%2==0)
       {
        if(a<n)
        {cout<<a/2;
        ok=1;}
        else
        {cout<<n;
        a=(a/2-n)/2;
        cout<<-a;
        ok=1;}
       }
     }
     ++n;
     }
    }
    return 0;
}
