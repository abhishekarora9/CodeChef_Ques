#include <iostream>
#include <algorithm>
using namespace std;
int main (){

long long int t;
cin>>t;
while(t--){
	long long int count=0;
	long long int m , n ;
	cin>>n>>m;
	int a[100000],b[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	long long int j=0,i=0;

	while(i<n&&j<m){
		if(a[i]<b[j])
			i++;
		if(a[i]==b[j]){
			count++;
			i++;
			j++;
		}
		if(a[i]>b[j])
			j++;

		
	}
	cout<<count<<endl;

}
	return 0;
}