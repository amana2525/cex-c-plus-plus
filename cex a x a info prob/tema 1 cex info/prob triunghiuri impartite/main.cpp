#include <iostream>

using namespace std;

#include <fstream>
ifstream fin("tripar.in");
ofstream fout("tripar.out");
int main()
{
    int p,N,M,i,x,tri,trf,s,f=4;
    fin>>p;
    fin>>N>>M;
    for(i=1;i<=N;++i)
    {fin>>x;
     tri=x*x;
     while(M-1)
     {f=f*4;
      --M;
     }
     trf=tri*f;
     if(p==1)
     fout<<trf<<endl;
     else
     {if(tri==1)
      s=x*(x+1)*3/2;
      else
      s=x*(x+1)*3;
      fout<<s<<endl;
     }
    }
    return 0;
}
