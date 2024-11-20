#include<iostream>
using namespace std;

int main(){
    int n,m,i,j,x[100][100],di[8]={-1,-1,-1,0,0,1,1,1},dj[8]={-1,0,1,-1,1,-1,0,1},k=0;
    cin>>n>>m;
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    cin>>x[i][j];
    for(i=1;i<=n;++i)
    for(j=1;j<=m;++j){
        bool ok=true;
        for(int d1=0;d1<8&&ok;++d1)
            for(int d2=d1+1;d2<8&&ok;++d2){
                int ni1=i+di[d1],nj1=j+dj[d1];
                int ni2=i+di[d2],nj2=j+dj[d2];
                if(ni1>=1&&ni1<=n&&nj1>=1&&nj1<=m&&ni2>=1&&ni2<=n&&nj2>=1&&nj2<=m)
                    if(x[ni1][nj1]==x[ni2][nj2])
                    ok=false;
            }
        if(ok)++k;
    }
    cout<<k;
    return 0;
}
