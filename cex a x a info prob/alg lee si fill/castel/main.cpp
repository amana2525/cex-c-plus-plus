#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("castel.in");
ofstream fout("castel.out");

int a[10000][10000],v[10000][10000],n,c;
int s[10000],sl[10000],sc[10000],m,ar,xl,xc,fl,fc,am,nr;

bool vb(int n,int p) {
 int i=0;
 while(i<p) {
  n/=2;
  i++;
 }
 return n%2;
}

int main() {
 int i,j,k;

 fin>>c>>n;

 for(i=1;i<=n;i++) {
  for(j=1;j<=n;j++) {
   fin>>a[i][j];
   if(a[i][j]==9 || a[i][j]==11 || a[i][j]==15 || a[i][j]==13) {
    m++;
    sl[m]=i;
    sc[m]=j;
   }
  }
 }

 for(i=0;i<=n+1;i++) {
  v[0][i]=v[n+1][i]=15;
  v[i][0]=v[i][n+1]=15;
 }

 for(i=1;i<=n;i++) {
  for(j=1;j<=n;j++) {
   v[i][j]=0;
  }
 }

 nr=m;
 while(m) {
  int l=sl[m],c=sc[m];
  ar=0;
  xl=l;
  xc=c;

  int p=1,u=1;
  int cl[10000],cc[10000];
  cl[u]=l;
  cc[u]=c;

  while(p<=u) {
   int rl=cl[p],rc=cc[p++];
   v[rl][rc]=1;
   ar++;
   if(xl<=rl && xc<=rc) {
    xl=rl;
    xc=rc;
   }

   if(vb(a[rl][rc],3)==0 && v[rl-1][rc]==0) {
    u++;
    cl[u]=rl-1;
    cc[u]=rc;
    v[rl-1][rc]=1;
   }

   if(vb(a[rl][rc],2)==0 && v[rl][rc+1]==0) {
    u++;
    cl[u]=rl;
    cc[u]=rc+1;
    v[rl][rc+1]=1;
   }

   if(vb(a[rl][rc],1)==0 && v[rl+1][rc]==0) {
    u++;
    cl[u]=rl+1;
    cc[u]=rc;
    v[rl+1][rc]=1;
   }

   if(vb(a[rl][rc],0)==0 && v[rl][rc-1]==0) {
    u++;
    cl[u]=rl;
    cc[u]=rc-1;
    v[rl][rc-1]=1;
   }
  }

  m--;
  if(ar>=am) {
   fl=sl[m];
   fc=sc[m];
   xl=xl;
   xc=xc;
   am=ar;
  }
 }

 if(c==1)
  fout<<nr<<'\n';
 if(c==2)
  fout<<am<<'\n';
 if(c==3)
  fout<<fl<<' '<<fc<<' '<<xl<<' '<<xc<<'\n';

 return 0;
}
