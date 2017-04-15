#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int lcm(int n1,int n2){
	int i, gcd, lcm;

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    lcm = (n1*n2)/gcd;
    return (lcm);
}
int main ()
{
	long long int t;
	cin>>t;
	while(t--){
		int a[100000];

		long long int n;
		cin>>n;
		int flag=0;

		long long int min_clash=9999999;

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];

		}
		sort(a,a+n);

		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				min_clash=min(min_clash,lcm(a[i],a[j]))
			}
		}
		cout<<min_clash<<endl;
	}
	return 0;
}