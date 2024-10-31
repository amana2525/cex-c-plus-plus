#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    bool ok;
    do
    {ok=false;
    for(int d=1;d<n;d*=2)
        for(int i=0;i+d<n;++i)
            if(arr[i]>arr[i+d])
            {swap(arr[i],arr[i+d]);
            ok=true;}}
            while(ok);
    for(int i=0;i<n;++i)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
