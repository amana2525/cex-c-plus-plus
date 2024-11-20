#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,m,i,j,x[100][100],max[100]={0},maxap=0,maxin;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    { for(j=1;j<=m;++j)
        {cin>>x[i][j];
         int a=x[i][j];
         max[a]++;
         if(max[a]>maxap)
        {maxap=max[a];
        maxin=a;
        }
        else
        if(max[a]==maxap && a>maxin)
        maxin=a;
        }
    }
    cout<<maxin<<" ";
    return 0;
}
