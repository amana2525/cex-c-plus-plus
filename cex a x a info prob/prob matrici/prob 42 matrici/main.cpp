#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, a, b, k, nrcam, v[100][100] = {0}, K, k1 = 0, di[4] = {-1, -1, 1, 1}, dj[4] = {-1, 1, -1, 1}, i1, di1, dj1;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> v[i][j];
    cin >> nrcam >> k;
    for (i = 1; i <= nrcam; i++) {
        cin >> a >> b;
        v[a][b] = 2;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (v[i][j] == 2) {
                for (i1 = 1; i1 <= k; i1++) {
                    for (K = 0; K < 4; K++) {
                        di1 = di[K] * i1;
                        dj1 = dj[K] * i1;
                        if (i + di1 >= 1 && i + di1 <= n && j + dj1 >= 1 && j + dj1 <= m)
                            v[i + di1][j + dj1] = 1;
                    }
                }
            }
        }
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (v[i][j] != 1 && v[i][j]!=2)
             k1++;
    cout << k1;
    return 0;
}
