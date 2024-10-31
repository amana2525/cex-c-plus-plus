#include <iostream>
using namespace std;

int main() {
    int n, x[1001];
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> x[i];
    }

    int k = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int a = x[i];
            int b = x[j];
            int minim = (a < b) ? a : b;
            int divizor_comun = 0;
            for (int d = 2; d <= minim; ++d) {
                if (a % d == 0 && b % d == 0) {
                    divizor_comun = 1;
                    break;
                }
            }

            if (divizor_comun == 0) {
                k++;
            }
        }
    }

    cout << k << endl;

    return 0;
}
