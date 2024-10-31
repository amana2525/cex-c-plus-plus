#include <iostream>
#include<fstream>
ifstream fin("munti.in");
ofstream fout("munti.out");
using namespace std;

int main()
{
    long long N;
    int i,a,s=0,k=0;
    double ma;
    fin>>N;
    for(i=1;i<=N;++i)
    {fin>>a;
     s=s+a;        //suma valorilor initiale ale muntilor
     ++k;
    }
    ma=s/k;
    fin.close();
    if(ma==int(ma))
    fout<<N; //deoarece media aritm a valorilor este un nr intreg, inseamna
    //ca pot avea loc schimbarile astfel incat toti muntii sa ajunga la acelasi nivel;
    else
    {
     fout<<N-1;
     //daca catul va da x,25 sau x,5 sau x,75, un numar va ramane mereu prea mare sau prea mic, insa ajutand la
     //echilibrarea celorlalte numere ramase.
    }
    fout.close();
    return 0;
}
