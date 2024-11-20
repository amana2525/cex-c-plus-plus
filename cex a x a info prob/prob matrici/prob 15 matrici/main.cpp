#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,x[100][100],s,max=-1;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(i=1;i<=n-1;++i)
        for(j=1;j<=m-1;++j)
       { s=0;
         s+=x[i][j]+x[i+1][j]+x[i][j+1]+x[i+1][j+1];
         if(s>max)
         max=s;
       }
       cout<<max;
    return 0;
}
