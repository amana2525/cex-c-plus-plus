#include <iostream>

using namespace std;

int main()
{
    int n,i,j,m,x[100][100],a,max=-1,v[100]={0};
    cin>>n>>m;
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    {cin>>x[i][j];
     a=x[i][j];
     v[a]++;
    }
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
    {   a=x[i][j];
        if(x[i][j]>max && v[a]>=2)
        max=a;
    }
    cout<<max;
    return 0;
}
