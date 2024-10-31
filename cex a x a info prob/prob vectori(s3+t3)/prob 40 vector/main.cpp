#include <iostream>

using namespace std;

int main()
{
    int n, k, x[1001], s[1001], st, j, m, i, temp;
    bool ok;

    cin >> n >> k;

    for (i = 1; i <= n; ++i)
        cin >> x[i];

    for (st = 1; st <= k; ++st) {
        m = 0;
        for (j = st; j <= n; j += k)
            s[++m] = x[j];

        do {
            ok = false;
            for (i = 1; i < m; ++i) {
                if (s[i] > s[i + 1]) {
                   swap(s[i],s[i+1]);
                    ok = true;
                }
            }
        } while (ok);

        for (i = 1; i <= m; ++i)
            cout << s[i] << " ";
        cout << endl;
    }

    return 0;
}
