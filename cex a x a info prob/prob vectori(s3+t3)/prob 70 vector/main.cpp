#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int s[100],f[100]={0},maxSoldati=0,numPlutoane=0;
    for(int i=0;i<n;++i) cin>>s[i],f[s[i]]++;
    for(int i=0;i<100;++i) {
        if(f[i]>0) numPlutoane++,maxSoldati=max(maxSoldati,f[i]);
    }
    int numPlutoaneMax=0;
    for(int i=0;i<100;++i) if(f[i]==maxSoldati)
        numPlutoaneMax++;
    cout<<numPlutoane<<endl<<maxSoldati<<endl<<numPlutoaneMax<<endl;
    for(int i=0;i<100;++i) {
        if(f[i]==maxSoldati) {
            for(int j=0;j<maxSoldati;++j) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
