#include <iostream>

using namespace std;

int main()
{
    int n,i,q,n1,n2,n3,n4,i1,j,x[1001];
    bool ok=false;
    cin>>n;
    n1=n;
    q=0;
    while(n1)
    {++q;
    n1/=10;
    }
    i1=0;
    for(i=1;i<=q;++i)
    {n1=n;
     n2=0;
     j=-1;
     while(n1)
     {j++;
      if(q-j!=i)
      n2=n2*10+n1%10;
      n1/=10;
     }
     while(n2)
     {n1=n1*10+n2%10;
      n2/=10;
     }
     n3=n1;
     n4=n;
     while(n3!=n4)
     {if(n3>n4)
      n3-=n4;
      else
        n4-=n3;
     }
     if(n3==1)
     {i1++;
     x[i1]=n2;}
    }
    do
    {ok=false;
     for(i=1;i<i1;i++)
        if(x[i]>x[i+1])
     {swap(x[i],x[i+1]);
      ok=true;
     }
    }
    while(ok);
    for(i=1;i<i1;++i)
        cout<<x[i]<<" ";
    return 0;
}
