#include <iostream>
#include <fstream>

using namespace std;

const int max=1001;

ifstream f("pseudobil.in");
ofstream g("pseudobil.out");

int n,m,k,d,s;
bool a[2*max-1][2*max-1];
int diag[2*max-1][2*max-1];

int main()
{
    int i,j,x,y,ok,x1,y1;
    f>>ok>>n>>k>>d;
    for(i=1;i<=k;++i)
    {f>>x>>y;
     a[x+y-1][n-x+y]=1;
    }
    for(i=1;i<=2*n-1;++i)
    {
      for(j=1;j<=2*n-1;++j)
      {
      diag[i][j]=diag[i-1][j]+diag[i][j-1]-diag[i-1][j-1]+a[i][j];
      }
    }
    if(ok==1)
    {x=d/2-1;
     g<<2*x*x+(d-1)<<"\n";
    }
    else
    {f>>m;
      while(m--)
       {
        f>>x>>y;
        x1=x+y-1;
        y1=n-x+y;
        s=diag[x1+d][y1]-diag[x1+d][y1-d-1]-diag[x1-1][y1]+diag[x1-1][y1-d-1];
        g<<s<<"\n";
        }
    }
    return 0;
}
