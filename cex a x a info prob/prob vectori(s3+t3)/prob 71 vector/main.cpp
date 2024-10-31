#include <iostream>

using namespace std;

int main()
{
    int n,d,p,a,i;
    cin>>n>>d>>p;
    for(i=1;i<=d;i++)
        cin>>a;
    if(d>p)
        cout<<"nu sunt destule";
    else
        cout<<d;
    return 0;
}
