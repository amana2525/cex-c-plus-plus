
#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("balmascat.in");
ofstream fout("balmascat.out");
int main()
{
    int n,p,i,k,c,c1;
    long long cod=0;
    fin>>n>>p;
    k=(n+p-1)/p;
    c=k%10;
    if(c!=9)
    c1=c+1;
    else
    c1=c-1;
    p=p*2-1;
    for(i=0;i<p;++i)
    {if(i%2==0)
     cod=cod*10+c1;
        else
     cod=cod*10+c;
    }
    fout<<cod;
    fin.close();
    fout.close();
    return 0;
}
