#include <iostream>
using namespace std;

int main() {
    int n = 0, a[1001] = {0}, f[1001] = {0}, i = 0;
    cin >> n;

    for (i = 0; i < n; ++i) {
        cin >> a[i];
        while (a[i] >= 10) {
            a[i] /= 10;
        }
        f[i] = a[i];
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
