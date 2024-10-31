#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    if(n%2==1)
    { k=(n+1)/2;
     while(n)
     {cout<<k<<" ";
      k++;
      --n;
     }
    }
    return 0;
}
