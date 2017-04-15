#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int m, n;
        cin >> m >> n;
        string s;
        cin >> s;
        long long int maxleftcount = 0, maxrightcount = 0, maxupcount = 0, maxdowncount = 0;
        long long int globmaxleftcount = 0, globmaxrightcount = 0, globmaxupcount = 0, globmaxdowncount = 0;
        long long int leftcount = 0, rightcount = 0, upcount = 0, downcount = 0;
        int flag = 0;
        for (long long int i = 0; i < s.length(); ++i) {
            if (s[i] == 'R') {
                if (maxrightcount == 0)
                    maxrightcount++;
                leftcount++;
                if (s[i + 1] == 'R' && i != s.length() - 1)
                    maxrightcount++;
                else {
                    if (maxrightcount > globmaxrightcount)
                        globmaxrightcount = maxrightcount;
                    maxrightcount = 1;
                }
            }
            if (s[i] == 'L') {
                if (maxleftcount == 0)
                    maxleftcount++;
                leftcount--;
                if (s[i + 1] == 'L' && i != s.length() - 1)
                    maxleftcount++;
                else {
                    if (maxleftcount > globmaxleftcount)
                        globmaxleftcount = maxleftcount;
                    maxleftcount = 1;
                }
            }

            if (s[i] == 'U') {
                if (maxupcount == 0)
                    maxupcount++;
                upcount++;
                if (s[i + 1] == 'U' && i != s.length() - 1)
                    maxupcount++;
                else {
                    if (maxupcount > globmaxupcount)
                        globmaxupcount = maxupcount;
                    maxupcount = 1;
                }
            }
            if (s[i] == 'D') {
                if (maxdowncount == 0)
                    maxdowncount++;
                upcount--;
                if (s[i + 1] == 'D' && i != s.length() - 1)
                    maxdowncount++;
                else {
                    if (maxdowncount > globmaxdowncount)
                        globmaxdowncount = maxdowncount;
                    maxdowncount = 1;
                }
            }

            if (abs(leftcount) >= n) {
                cout << "unsafe" << endl;
                flag = 1;
                break;
            }
            if (abs(upcount) >= m) {
                cout << "unsafe" << endl;
                flag = 1;
                break;
            }
        }
        //cout<<maxleftcount<<maxrightcount<<maxupcount<<maxdowncount<<endl;

        if (flag == 1)
            continue;
        if (globmaxleftcount >= n || globmaxrightcount >= n) {
            cout << "unsafe" << endl;
            continue;
        }
        if (globmaxupcount >= m || globmaxdowncount >= m) {
            cout << "unsafe" << endl;
            continue;
        }

        if (abs(leftcount) < n && abs(upcount) < m) {
            cout << "safe" << endl;
            continue;
        }
        cout << "safe" << endl;
    }
    return 0;
}