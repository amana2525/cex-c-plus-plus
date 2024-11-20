#include <iostream>
using namespace std;
int main()
{
    int x[100][100],v[1001],i,n,m,j,s=0,max;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {   s=0;
        max=-100;
        for(j=1;j<=m;++j)
    {
        cin>>x[i][j];
        if(x[i][j]>max)
        max=x[i][j];
        s=s+x[i][j];
    }
    cout<<s-max<<" "<<endl;
    }
    return 0;
}
