#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        long long int p;
        int a[1000000]={0};
        long long int j=0;

        long long int  temp = 0,flag2=0, full_island = 0, tempcount = 0;
        int flag = 0;
        for (long long int i = 1; i <= n; ++i) {

            cin >> p;
            
            int b[100000]={0};
           

            for (long long int j = 1; j <= p; ++j) {
                cin >> temp;
                a[temp]++;
                b[temp]++;
                if(a[temp]==1)
                	tempcount++;
            }
           
            
            if(tempcount==k&&i<n)
            	flag=1;
            if(tempcount==k&&i==n&&flag==0)
                flag2=1;


        }
        tempcount = 0;
        if (flag == 1 && n > 1&& flag2==0) {
            cout << "some" << endl;
        }
        else if (flag2==1)
            cout << "all" << endl;
        else {

            for (long long int i = 1; i <= k; ++i) {
                if (a[i] > 0)
                    tempcount++;
            }

            if (tempcount != k)
                cout << "sad" << endl;
            else if (tempcount == k)
                cout << "all" << endl;
        }
    }
    return 0;
}