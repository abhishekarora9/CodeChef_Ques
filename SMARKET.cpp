#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {

        long long int n, m;
        cin >> n >> m;
        long long int e, f, g;
        int a[100000];

        for (long long int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        long long int totalcount = 0;
        for (long long int i = 0; i < m; ++i) {
            totalcount = 0;
            cin >> e >> f >> g;
            int b[100000] = { 0 };
            for (int j = e; j <= f; ++j) {
                if (b[a[j]] < g) {
                    b[a[j]]++;
                    if (b[a[j]] == g)
                        totalcount++;
                }
            }
            if (g == 0) {
                totalcount = 1;
                for (int j = e; j < f; ++j) {
                    if (a[j] != a[j + 1])
                        totalcount++;
                }
            }
                cout << totalcount << endl;
            }
        }
        return 0;
    }