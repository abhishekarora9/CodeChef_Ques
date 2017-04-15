#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, count = 0;
        int a[1000000];

        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int b[1000000];
        for (int j = 0; j < n - 1; ++j) {
            int flag = 0;

            for (int i = 0; i < n - 1; ++i) {
                if (a[i] == 0 && a[i + 1] == 1) {
                    swap(a[i], a[i + 1]);
                    i++;
                    flag = 1;
                }
            }
            if (flag == 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}