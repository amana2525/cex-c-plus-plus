#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],s=0,max=-1,a,maxi;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { s=0;
      for(j=1;j<=m;++j)
      {
       cin>>x[i][j];
       a=x[i][j];
       if(a%2==0)
        s+=a;
      }
      if(s>max)
      {max=s;
      maxi=i;
      }
    }
    cout<<maxi;
    return 0;
}
