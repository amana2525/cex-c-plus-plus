#include <iostream>

using namespace std;

int main()
{
    int n,m,i,i1,j1,k=0,j,x[100][100],viz[100][100]={0},lung,lat,s=0,max=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
        {
            if(x[i][j]==1 && viz[i][j]!=1)
            { ++k;
            lung=0;
            lat=0;
              for(i1=i;i1<=n && x[i1][j]==1 && viz[i1][j]!=1;++i1)
              {lat++;}
              for(j1=j;j1<=m && x[i][j1]==1 && viz[i][j1]!=1;++j1)
               {lung++;}
              for(i1=i;i1<i+lat;++i1)
                for(j1=j;j1<j+lung;j1++)
                viz[i1][j1]=1;
             s=lung*lat;
             if(s>max)
            max=s;
            }
         }
    }
    cout<<k<<" "<<max;
    return 0;
}
