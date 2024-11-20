#include <iostream>

using namespace std;

int main()
{
    int x[50][50],m,n,i,j,a,t;
    cin>>n;
    for(i=0;i<n;++i)
        for(j=0;j<n;++j)
        cin>>x[i][j];
    if(n%2==0)
        a=n/2;
    else
        a=n/2+1;
        t=0;
        n1=n;
    while(a)
    {
    for(j=t;j<n1;++j)
     cout<<x[t][j];
     cout<<endl;
    for(i=t+1;i<n1;++i)
     cout<<x[i][n1-1];
     cout<<endl;
    for(j=n1-2;j>=t;--j)
     cout<<x[n1-1][j];
     cout<<endl;
    for(i=n1-2;i>t;--i)
    cout<<x[i][t];
    cout<<endl;
    --a;
    n1--;
    t++;
    }

    return 0;
}
