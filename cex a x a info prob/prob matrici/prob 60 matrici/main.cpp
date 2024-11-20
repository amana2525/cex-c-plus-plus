#include <iostream>
using namespace std;

int m, n, k;
int x[501][501], s[501][501];

void calcS() {
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            s[i][j] = x[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
    }
}

int getS(int x1, int y1, int x2, int y2) {
    return s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1];
}

bool dup(int c[10][2], int step, int c2[10][2]) {
    for (int i = 0; i < step; ++i) {
        for (int j = 0; j < step; ++j) {
            if (c[i][0] == c2[j][0] && c[i][1] == c2[j][1]) return true;
        }
    }
    return false;
}

void genCuts(int c[10][2], int step, int& cnt, int maxS) {
    if (step == k) {
        int cs = 0;
        for (int i = 0; i < k; ++i) {
            if (c[i][0] == 0) {
                cs += getS(c[i][1] + 1, 1, c[i][1] + 1, n);
            } else {
                cs += getS(1, c[i][1] + 1, m, c[i][1] + 1);
            }
        }

        if (cs == maxS) {
            bool unq = true;
            for (int i = 0; i < cnt; ++i) {
                bool dpl = true;
                for (int j = 0; j < k; ++j) {
                    if (c[i][0] != c[j][0] || c[i][1] != c[j][1]) {
                        dpl = false;
                        break;
                    }
                }
                if (dpl) {
                    unq = false;
                    break;
                }
            }

            if (unq) {
                ++cnt;
            }
        }
        return;
    }

    for (int i = 1; i < m; ++i) {
        c[step][0] = 0;
        c[step][1] = i;
        genCuts(c, step + 1, cnt, maxS);
    }

    for (int j = 1; j < n; ++j) {
        c[step][0] = 1;
        c[step][1] = j;
        genCuts(c, step + 1, cnt, maxS);
    }
}

int main() {
    cin >> m >> n >> k;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x[i][j];
        }
    }

    calcS();

    int maxS = getS(1, 1, m, n);

    int c[10][2];
    int cnt = 0;

    genCuts(c, 0, cnt, maxS);

    cout << cnt << endl;

    return 0;
}
