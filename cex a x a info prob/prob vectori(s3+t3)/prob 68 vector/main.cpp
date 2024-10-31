#include <iostream>
using namespace std;

int main() {
    int n=0,m=0,l=0,d=0,dr=0,po=0;
    cin>>n>>m>>l>>d;
    cout<<(n-m)/l<<" ";
    if(d<=m)
    cout<<d<<endl;
    else {
        dr=d-m;
        po=dr/l;
        cout<<m+po<<endl;
    }
    return 0;
}
