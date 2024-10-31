#include <iostream>

using namespace std;
#include <fstream>
ifstream fin("concurs3.in");
ofstream fout("concurs3.out");
int main()
{
    int C,N,echipa,note,sc=0,i,c,s1=0,s2=0,s3=0,max=0,kmax=0,tmax;
    fin>>C;
    fin>>N;
    for(i=1;i<=N;++i)
    {fin>>echipa>>note;
    sc=0;
     while(note)
     {if(note%10!=0)
      {c=note%10;
      note/=10;
      sc=sc+c;}
      else
      {c=note%100;
      note/=100;
      sc=sc+c;
      }
      if(echipa==1)
      s1=s1+c;
      else if(echipa==1)
      s2=s2+c;
      else
      s3+=c;
      if(sc>max)
      {max=sc;
       kmax=1;
      }
      else if(sc==max)
        kmax++;
     }
    }
    if(C==1)
    fout<<max<<" "<<kmax;
    else if(C==2)
    {if(s1==s2==s3==0)
     fout<<"FARA CASTIGATOR";
     else
     {if(s1>s2)
      {s1=max;
       tmax=1;
      }
      else
      {s2=max;
       tmax=2;
      }
      if(max==s3)
      {fout<<tmax<<" "<<s3;
      }
      else if(max<s3)
      fout<<3<<max;
      else if(s1==s2==s3)
      fout<<" 1"<<" 2"<<" 3 "<<s1;
      else
      fout<<tmax;

    }
    }
    return 0;
    }
