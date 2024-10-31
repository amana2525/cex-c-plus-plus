#include <iostream>

using namespace std;

int main() {
    int n, x[1001], y, i, i1, i2, i3, t[1001], v[1001] = {0}, pst = 0;

    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> x[i];
        y = x[i];
        while (y >= 10)
        y /= 10;
        v[i] = y;

        if ((x[i] / 10) % 10 % 2 == 0)
            ++pst;
    }

    for (i = 0; i <= 9; ++i) {
        i2 = 0;
        for (i1 = 1; i1 <= n; i1++) {
            if (v[i1] == i) {
                ++i2;
                t[i2] = x[i1];
            }
        }


        bool ok;
        do {
            ok = false;
            for (i3 = 1; i3 < i2; ++i3) {
                if (t[i3] > t[i3 + 1]) {
                    swap(t[i3], t[i3 + 1]);
                    ok = true;
                }
            }
        } while (ok);

        if (i2 != 0) {
            cout<< " ";
            for (i3 = 1; i3 <= i2; ++i3)
                cout << t[i3] << " ";
            cout << endl;
        }
    }

    cout << pst << " " << n - pst << endl;
    return 0;
}
