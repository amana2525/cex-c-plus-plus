2.#include <iostream>
using namespace std;
int main()
{
    int x[100][100],i,n,m,j,s=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    {   s=0;
        for(j=1;j<=m;++j)
    {
        cin>>x[i][j];
        s=s+x[i][j];

    }
    cout<<s<<" "<<endl;
    }
    return 0;
}
