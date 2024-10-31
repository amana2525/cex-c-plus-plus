#include <iostream>
using namespace std;

int main() {
    int n = 0, a[1001] = {0}, s[1001] = {0};

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int j = 1; j <= a[i]; ++j) {
            if (a[i] % j == 0) {
                s[i] += j;
            }
        }
    }

    bool ok;
    do {
        ok = false;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] > s[i + 1] || (s[i] == s[i + 1] && a[i] > a[i + 1])) {
                swap(s[i], s[i + 1]);
                swap(a[i], a[i + 1]);
                ok = true;
            }
        }
    } while (ok);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
