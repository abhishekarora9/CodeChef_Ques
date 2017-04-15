#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, kcount;
        cin >> n >> kcount;
        cin.get();
        char a[1000000];
        for (long long int i = 0; i < n; ++i) {
            a[i] = cin.get();
        }
        int b[100000];
        long long int count = 0, j = 0;
        for (long long int i = 0; i < n; ++i) {
            count = 0;
            if (a[i] == '0') {
                while (a[i] == '0') {
                    count++;
                    i++;
                }
            }
            else {
                while (a[i] == '1') {
                    count++;
                    i++;
                }
            }
            b[j] = count;
            j++;
            i--;
        }
        long long int flag = 0;
        long long int first=0, last;
        first = b[0];
        last = b[j - 1];
        long long int firstindex = 0;
        long long int lastindex = j - 1;
        if (b[j - 1] % 2 == 0)
            flag++;
        if (b[0] % 2 == 0)
            flag++;

        long long int temp = 0;
        sort(b, b + j);
       // cout<<flag<<endl;
         

        for (long long int i = j - 1; i >= 0 && kcount > 0; i--) {
            temp = b[i];
            if (b[i] == 1) {
                kcount--;
                continue;
            }
            if (b[i] == 2) {
                if (flag != 0) {
                    b[i]--;
                    flag--;
                    kcount--;
                    continue;
                }
                else if(kcount>=2)
                {
                	b[i]--;
                	kcount=kcount-2;
                	continue;

                }
                else{
                kcount--;
                continue;
            }
            }

            if (temp % 2 == 1) {
                b[i] = (b[i] - 1) / 2;
                b[j] = b[i];
                kcount--;

                j++;
            }
            if (temp % 2 == 0) {
                b[i] = b[i] / 2;
                b[j] = b[i] - 1;

                kcount--;
                j++;
            }
            sort(b, b + j);

            i = j - 1;
            i++;
            
        }
         sort(b,b+j);

        cout << b[j - 1] << endl;
    }
    return 0;
}