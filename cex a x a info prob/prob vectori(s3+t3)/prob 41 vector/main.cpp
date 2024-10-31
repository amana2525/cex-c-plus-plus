#include <iostream>
using namespace std;

int main() {
    int n = 0, ok1=0,a[1001] = {0},i, min = 1001, max = -1, idx_min = -1, idx_max = -1;
    bool ok;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < min) {
            min = a[i];
            idx_min = i;
        }
        if (a[i] > max) {
            max = a[i];
            idx_max = i;
        }
    }

    if (idx_min > idx_max)
    {
      int idx_min1=idx_max;
      int idx_max1=idx_min;
    do
    {ok=false;
     for(i=idx_min1;i<idx_max1;++i)
     if(a[i]>a[i+1])
     {swap(a[i],a[i+1]);
      ok=true;
     }
    }
    while(ok);
    }
    else
    {do
    {ok=false;
     for(i=idx_min;i<idx_max;++i)
     if(a[i]>a[i+1])
     {swap(a[i],a[i+1]);
      ok=true;
     }
    }
    while(ok);

    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
