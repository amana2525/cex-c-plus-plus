#include <iostream>

using namespace std;

int main()
{
    int x[100][100],n,m,i,j,max,col;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { max=-1;
      for(j=1;j<=m;++j)
       { cin>>x[i][j];
         if(x[i][j]>max)
         {max=x[i][j];
          col=j;
         }
       }
       cout<<max<<" "<<col<<endl;
    }
    return 0;
}
