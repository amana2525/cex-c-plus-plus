#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("fin");
ofstream fout("fout");
int main()
{
    int c,p;
    fin>>c>>p;
    c=c-(p*(p-1))/2;
    fout<<c%p;
    return 0;
}
