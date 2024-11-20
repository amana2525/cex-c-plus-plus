#include <iostream>

using namespace std;

int main()
{
    int x[100][100],i,j,n,m,min,s=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
        cin>>x[i][j];
    for(j=1;j<=m;++j)
    {   min=1000;
        for(i=1;i<=n;++i)
        {
          if(x[i][j]<min)
            min=x[i][j];
        }
        s+=min;
    }
    cout<<s;
    return 0;
}
