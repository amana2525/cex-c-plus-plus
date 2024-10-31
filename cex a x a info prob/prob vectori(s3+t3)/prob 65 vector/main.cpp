#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1001];
    int sum = 0;
    int max_val = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }

    if (sum % n == 0) {
        int x = sum / n;
        if (x <= 2 * max_val) {
            cout << "Se pot face toate elementele egale cu " << x << endl;
        } else {
            cout << "Nu se pot face toate elementele egale (depășește limita)." << endl;
        }
    } else {
        cout << "Nu se pot face toate elementele egale." << endl;
    }

    return 0;
}
