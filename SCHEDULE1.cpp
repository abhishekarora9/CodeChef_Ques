#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n ,k;
		cin>>n>>k;
		cin.get();
        int  a[1000000];
        for (long long int i = 0; i < n; ++i) {
            a[i] = cin.get();
        }
        for (int i = 0; i < n; ++i)
        {
        	if(a[i]==48)
        		a[i]=0;
        	else a[i]=1;
        }
        int b[100000],c[100000];
        long long int count = 0, j = 0;
        for (long long int i = 0; i < n; ++i) {
            count = 0;
            if (a[i] == 0) {
                while (a[i] == 0) {
                    count++;
                    i++;
                }
            }
            else {
                while (a[i] == 1) {
                    count++;
                    i++;
                }
            }
            b[j] = count;
            j++;
            i--;
        }
        
        }

	return 0;
}