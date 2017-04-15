#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		string a[10],b[10];
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		long long int totalcount=0;
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				if(a[i]==b[j]){
					totalcount++;
					continue;
				}
			}
			
		}
		if(totalcount>=2)
			cout<<"similar"<<endl;
		else cout<<"dissimilar"<<endl;
	}
	return 0;
}