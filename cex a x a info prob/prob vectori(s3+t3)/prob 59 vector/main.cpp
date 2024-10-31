#include <iostream>
using namespace std;

int main() {
    int n = 0, a[1001] = {0}, ng[1001] = {0}, ps[1001] = {0};
    int c_n = 0, c_p = 0, z = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0) {
            ng[c_n++] = a[i];
        } else if (a[i] > 0) {
            ps[c_p++] = a[i];
        } else {
            z++;
        }
    }

    bool ok;
    do {
        ok = false;
        for (int i = 0; i < c_n - 1; ++i) {
            if (ng[i] < ng[i + 1]) {
                swap(ng[i], ng[i + 1]);
                ok = true;
            }
        }
    } while (ok);

    do {
        ok = false;
        for (int i = 0; i < c_p - 1; ++i) {
            if (ps[i] < ps[i + 1]) {
                swap(ps[i], ps[i + 1]);
                ok = true;
            }
        }
    } while (ok);

    for (int i = 0; i < c_n; ++i)
        cout << ng[i] << " ";

    for (int i = 0; i < z; ++i)
        cout << "0 ";

    for (int i = 0; i < c_p; ++i)
        cout << ps[i] << " ";

    return 0;
}
