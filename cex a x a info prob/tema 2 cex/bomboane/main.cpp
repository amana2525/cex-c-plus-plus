
#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("bomboane.in");
ofstream fout("bomboane.out");
int main()
{
    int C,i,N,X,Y,B=0,maxc=0,maxc2=0,bmax=0,minr=0, rest=0,k=0;

    fin>>C>>N>>X>>Y;

    if (C==1)
    {
        B=N/X;
        fout<<B<<endl;
    }
    else if (C==2)
    {
        for(i=2;i<=N;++i)
        { if(N%i==0)
        {maxc=N/i;
        break;}
        }
        fout<<maxc<<endl;
    }
    else if (C==3)
    {
        minr=N;
        for (k=X;k<=N/Y;++k) {
            B=N/k;
            if (B>=Y)
            {
                rest=N%k;
                if (rest<minr||(rest==minr&&k>maxc2))
                {
                    minr=rest;
                    maxc2=k;
                    bmax=B;
                }
            }
        }
        fout<<minr<<" "<<maxc2<<" "<<bmax;
    }


    return 0;
}
