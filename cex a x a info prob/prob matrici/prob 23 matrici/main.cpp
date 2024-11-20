#include <iostream>

using namespace std;

int main()
{
    int n,i,m,k,j,x[100][100],v[100],k1[100]={0},k2[100],i1;
    cin>>n>>m>>k;
    for(i=1;i<=k;++i)
        cin>>v[i];
    for(i=1;i<=n;++i)
    {  for(i1=1;i1<=k;++i1)
            k2[i1]=0;
     for(j=1;j<=m;++j)
       {cin>>x[i][j];
        for(i1=1;i1<=k;++i1)
        { if(v[i1]==x[i][j])
          k2[i1]=1;
        }
       }
       for(i1=1;i1<=k;++i1)
        if(k2[i1]==1)
        k1[i1]++;
    }
    for(i1=1;i1<=k;++i1)
        if(k1[i1]==n)
    cout<<"DA ";
    else
    cout<<"NU ";
    return 0;
}
