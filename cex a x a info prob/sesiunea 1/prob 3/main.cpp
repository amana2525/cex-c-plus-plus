#include <iostream>

using namespace std;

int main()
{
    int n,n1,s=0;
    cin>>n;
    while(n)
    {
     if(100<=n && n<1000)
     {n1=n;
      while(n1>=9)
      {n1/=10;
      }
      if(n%10==n1)
      s+=n;
     }
     cin>>n;
    }
    cout<<s;
    return 0;
}
