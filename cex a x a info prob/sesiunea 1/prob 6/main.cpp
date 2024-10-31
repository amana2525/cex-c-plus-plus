#include <iostream>

using namespace std;

int main()
{
    int a,a1,k=0;
    cin>>a;
    while(a)
    {a1=a;
     cin>>a;
     if(a1%10==a%10)
     ++k;
    }
    cout<<k;
    return 0;
}
