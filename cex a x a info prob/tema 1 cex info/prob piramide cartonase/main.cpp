#include <iostream>

using namespace std;

int main()
{
    int N,X,K,c,i,i1,max=0,maxval,k=0,s=0,s1=0,cul[100]={0};
    cin>>N>>X>>K;
    while(K)
    {cin>>c;
    if(c>N)
    --i;
    else if(cul[c]==1)
    --i;
    else
      {cul[c]++;
      --K;}
    }
    i=2;
    while(s<X)
    {s=s+i*(i+1)/2;
    ++i;
    }
    i-=2;
    cout<<X<<" va fi in a "<<i<<" a piramida"<<endl;
    i=2;s=0;
    while(s<N)
    {s=s+(i*(i+1)/2);
    ++i;
    }
    i-=2;
    if(s==N)
    cout<<i<<" piramide complete va putea construi"<<endl;
    else
    cout<<i-1<<" piramide complete va putea construi"<<endl;
    if(s>N)
    {
    s-=(i+1)*(i+2)/2;
    cout<<N-s<<" cartonase ramase"<<endl;}
    s=1;
    i=2;
    for(i=2;s<N;++i)
    { s1=s;
     s=i*(i+1)/2;
    if(s>N)
    break;
    k=0;
    for(int j=s1; j<=s; ++j)
    {if(cul[j]>0)
    ++k;
    }
    if(k>max)
    {max=k;
    maxval=i-3;
    }
    }
    cout << maxval << " este prima piramida cu cele mai multe cartonase albe" << endl;
    return 0;
}
