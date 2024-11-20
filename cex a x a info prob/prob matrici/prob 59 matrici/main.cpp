#include <iostream>
using namespace std;

int main() {
    int L,C;
    cin>>L>>C;

    int x[501][501]={0};
    int sum[501][501]={0};

    for(int i=1;i<=L;++i) {
        for(int j=1;j<=C;++j) {
            cin>>x[i][j];
            sum[i][j]=x[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    }

    long long count=0;

    for(int xs=1;xs<=L;++xs) {
        for(int ys=1;ys<=C;++ys) {
            for(int xd=xs;xd<=L;++xd) {
                for(int yd=ys;yd<=C;++yd) {
                    int s=sum[xd][yd]-sum[xs-1][yd]-sum[xd][ys-1]+sum[xs-1][ys-1];
                    if(s%3==0)++count;
                }
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
