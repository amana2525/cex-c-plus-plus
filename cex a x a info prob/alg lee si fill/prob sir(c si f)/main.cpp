#include <iostream>
#include <fstream>
int inv(long long x)
 {long long p=1,n=20173333-2;
  while (n>0)
  {   if (n%2==1)
      {   p=(p*x)%20173333; n--;}
      else
      { x=(x*x)%20173333; n/=2;}
  }
  return p;
}
using namespace std;
ifstream fin("sir.in");
ofstream fout("sir.out");
int main()
{
    int P,N,X,U,R;
    fin>>P>>N>>X;
    if(P==1)
    {U=X;
     long long factN=1;
     long long factU=1;
     long long factR=1;
     for(int i=1;i<=N-1;++i)
     factN*=i;
     for(int i=1;i<=U-1;++i)
     factU*=i;
     for(int i=1;i<=N-U;++i)
     factR*=i;
     long long factpr=(factU*factR)%20173333;
     factpr=inv(factpr);
     fout<<(factN*factpr)%20173333;
    }
    else
    { R=X;
    int i;
    int v[100001];
    v[1]=1;v[2]=1;
    for(i=2;i<=N;i++)
    {
        v[i+1]=2*v[i]%20173333;
        if(i>R)
        {
            if(v[i+1]>=v[i-R])
               v[i+1]-=v[i-R];
            else
                v[i+1]=v[i+1]+20173333-v[i-R];
        }
    }
    fout<<v[N+1];
    }
    return 0;
}
