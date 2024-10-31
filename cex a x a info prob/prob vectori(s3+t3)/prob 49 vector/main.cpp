#include <iostream>

using namespace std;

int main()
{
    int x[1001],s[1001]={0},n,i,y;
    bool ok;
    cin>>n;
    for(i=1;i<=n;++i)
    { cin>>x[i];
    y=x[i];
     while(y)
     {s[i]=s[i]+y%10;
      y/=10;
     }
    }
    do
    {ok=false;
    for(i=1;i<n;++i)
    if(s[i]>s[i+1])
    {swap(x[i],x[i+1]);
     swap(s[i],s[i+1]);
     ok=true;
    }
    }
    while(ok);
    for(i=1;i<=n;++i)
    cout<<x[i]<<" ";
    return 0;
}
