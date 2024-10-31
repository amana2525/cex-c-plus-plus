#include <iostream>

using namespace std;
#include <fstream>
ifstream f("fin");
ofstream g("fout");
int main()
{
    int n,C,i,a,s=0;
    f>>n>>C;
    for(i=1;i<=n;++i)
    {f>>a;
     s+=a;
    }
    if(s/C!=int(s/C))
    g<<(s/C)+1;
    else
    g<<s/C;
    return 0;
}
