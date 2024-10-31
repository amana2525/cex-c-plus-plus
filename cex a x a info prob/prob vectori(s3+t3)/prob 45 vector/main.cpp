#include <iostream>
using namespace std;

int main() {
    int n = 0, a[1001] = {0},min,c, f[1001] = {0}, i = 0;
    cin >> n;

    for (i = 0; i < n; ++i) {
        cin >> a[i];
        min=10;
        while (a[i]) {
            c=a[i]%10;
            if(c<min)
            min=c;
            a[i] /= 10;
        }
        f[i] = min;
    }
    bool ok;
    do {
        ok = false;
        for (i = 0; i < n - 1; ++i) {
            if (f[i] > f[i + 1]) {
                swap(f[i], f[i + 1]);
                ok = true;
            }
        }
    } while (ok);

    for (i = 0; i < n; ++i) {
        cout << f[i];
    }
    cout << endl;

    return 0;
}
