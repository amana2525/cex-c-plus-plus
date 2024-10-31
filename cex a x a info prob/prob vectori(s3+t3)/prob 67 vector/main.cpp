#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0, i = 0, j = 0, cnt = 0, maxZ = 0, nrL = 0, curZ = 0;
    int a[100][100] = {0}, z[100] = {0};

    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        cnt = 0;
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0) cnt++;
        }
        z[i] = cnt;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (z[i] < z[j])
            {
                swap(z[i],z[j]);
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        nrL = i + 1;
        curZ = z[i] * nrL;
        if (curZ > maxZ) maxZ = curZ;
    }

    cout << maxZ << endl;
    return 0;
}
