#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        int a[100000][3];
        int b[100000][3];
        long long int globalmax = -1, count = 0, globalmaxindex;

        for (long long int i = 1; i <= n; ++i) {
            cin >> a[i][0];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> a[i][1];
            a[i][2] = a[i][0] * a[i][1];
            if (a[i][2] > globalmax) {
                count = 1;
                globalmax = a[i][2];
                globalmaxindex = i;
            }
            else if (a[i][2] == globalmax)
                count++;
        }
        long long int j = 1;
        if (count == 1) {
            cout << globalmaxindex << endl;
            continue;
        }
        
        else{
        	//cout<<globalmax<<" "<<count<<endl;
        
            if (count > 1) {
                for (int i = 1; i <= n; ++i) {
                    if (a[i][2] == globalmax) {
                        b[j][0] = a[i][0];
                        b[j][1] = a[i][1];
                        b[j][2] = i;
                        j++;
                    }
                }
            }
            globalmax = -1;
           

            for (int i = 1; i < j; ++i) {
                if (b[i][1] > globalmax) {
                    count = 1;
                    globalmax = b[i][1];
                    globalmaxindex = b[i][2];
                }
                else {
                    if (b[i][1] == globalmax)
                        count++;
                }
            }

            cout << globalmaxindex << endl;
        }
    }
    return 0;
}