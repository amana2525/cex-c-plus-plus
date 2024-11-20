#include <iostream>
#include <cmath>

using namespace std;
void prim(int &i,int &j);
void perfect(int &i,int &j, int &n, int &m);
int main()
{
    int n,m,i,j,x[100][100],a,d,t=0,ok;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    {for(j=1;j<=m;++j)
       {a=x[i][j];
        t++;
        if(sqrt(a)==int(sqrt(a)))
        {perfect(i,j,n,m);
        x[i][j]=8;
        }
        else
        {ok=1;
        for(d=2;d<=sqrt(a);++d)
        if(a%d==0)
        {ok=0;
        break;
        }
        if(ok==1)
        {prim(i,j);
         x[i][j]=8;
        }
        else if(x[i][j]==1)
        continue;
        else if(x[i][j]==2 || x[i][j]==3)
        prim(i,j);
        }
       }
    }
    cout<<t;
    return 0;
}
  void prim(int &i,int &j)
    { if(i>1)
    i--;
    if(j>1)
    j--;
    }
    void perfect(int &i,int &j,int &n,int &m)
    { if(i<n)
     i++;
     if(j<m)
     j++;
    }
