#include <fstream>

using namespace std;

const int nmax=101;
const int kmax=41;

int t[nmax][nmax],a[nmax];
int m,n,k,x1,y1,x2,y2,v,i,j,b,ne=0,l,c,ok,d;

int modul(int x){if(x<0) return -x; else return x;}
int max(int x,int y){if(x>=y) return x; else return y;}
int min(int x,int y){if(x>=y) return y; else return x;}

int main(){
    ifstream f("elicop.in");
    ofstream g("elicop.out");

    for(i=0;i<kmax;++i) a[i]=0;
    f>>m>>n;
    for(i=1;i<=m;++i)
        for(j=1;j<=n;++j)
            f>>t[i][j];
    f>>k;

    for(i=1;i<=k;++i){
        f>>x1>>y1>>x2>>y2>>v;
        d=(x2-x1)*(y2-y1);
        if(d>0&&v==-1) ok=1;
        if(d>0&&v==1) ok=2;
        if(d<0&&v==1) ok=3;
        if(d<0&&v==-1) ok=4;

        b=0;
        if(ok==1){
            for(l=1;l<=max(x1,x2)-min(x1,x2)+1;++l)
                for(c=1;c<=l;++c)
                    if(t[l+min(x1,x2)-1][c+min(y1,y2)-1]==0) ++b;
        }
        else if(ok==2){
            for(l=1;l<=max(x1,x2)-min(x1,x2)+1;++l)
                for(c=l;c<=max(y1,y2)-min(y1,y2)+1;++c)
                    if(t[l+min(x1,x2)-1][c+min(y1,y2)-1]==0) ++b;
        }
        else if(ok==3){
            for(l=1;l<=max(x1,x2)-min(x1,x2)+1;++l)
                for(c=1;c<=modul(x2-x1)+2-l;++c)
                    if(t[l+min(x1,x2)-1][c+min(y1,y2)-1]==0) ++b;
        }
        else if(ok==4){
            for(l=1;l<=max(x1,x2)-min(x1,x2)+1;++l)
                for(c=modul(x2-x1)+2-l;c<=max(y1,y2)-min(y1,y2)+1;++c)
                    if(t[l+min(x1,x2)-1][c+min(y1,y2)-1]==0) ++b;
        }

        if(b==0) ++ne;
        else if(b>(modul(x2-x1)+1)*(modul(x2-x1)+2)/4) a[++a[0]]=i;
    }

    g<<ne<<"\n";
    g<<a[0]<<" ";
    for(i=1;i<=a[0];++i) g<<a[i]<<" ";

    f.close();
    g.close();
    return 0;
}
