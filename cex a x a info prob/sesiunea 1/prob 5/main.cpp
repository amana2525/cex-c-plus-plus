#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("fin");
ofstream fout("fout");
int main()
{
    int a,s=0,k=0;
    while(fin)
    {fin>>a;
     s+=a;
     ++k;
    }
    if(s/k==int(s/k))
    fout<<s/k;
    else
    fout<<-1;
    return 0;
}
