#include <iostream>
#include <fstream>
using namespace std;

int n,h[100000],t[100000];

int pr(int p){
  int s=0;
  for(int i=1;i<=n;i++){
    t[i]=h[i];
  }
  t[p]=0;

  for(int i=1;i<=n;i++){
    int a=i,b=i+1;
    while(a>=1&&t[a]<=t[i]){
      a--;
      s++;
    }
    while(b<=n&&t[b]<=t[i]){
      b++;
      s++;
    }
  }
  return s;
}

int main(){
  ifstream f("turnuri.in");
  ofstream g("turnuri.out");
  f>>n;
  for(int i=1;i<=n;i++){
    f>>h[i];
  }
  for(int p=1;p<=n;p++){
    g<<pr(p)<<endl;
  }
  return 0;
}
