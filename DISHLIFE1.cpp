#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k,p;
		cin>>n>>k;
		long long int totalsum=0,temp,sumcomp=0,tempcount=0;
		int a[100000]={0};
		int flag=0;
		sumcomp=k*(k+1);
		sumcomp=sumcomp/2;
		for (long long int i = 0; i < n; ++i)
		{
			cin>>p;
			totalsum=0;
			for (long long int j = 0; j < p; ++j)
			{
				cin>>temp;
				a[temp]++;
				totalsum=totalsum+temp;
			

			}
			if(totalsum=sumcomp)
				flag=1;
		}

		if(flag==1&&n>1)
			cout<<"some"<<endl;
		else if(flag==1&&n==1)
		{
			cout<<"all"<<endl;
		}
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