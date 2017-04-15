#include <stdio.h>

int main ()

{
	int a , n , k ;
	int arr[100]={0};
	scanf("%d %d %d",&a,&n,&k);
	int j=0;
	for (int i = 0; i < a; ++i)
	{
		

		
		if(arr[j]<n&&j<=k){
			arr[j]++;
			j=0;
			continue;

		}
		L:
		
		if(arr[j]==n){
		
			arr[j]=0;
			j++;
			if(j<=k)
			goto L;
		}
		else{ if(j<=k)
			arr[j]++;


		}
		j=0;


		
	
	}
	for (int f = 0; f < k; ++f)
	{
		printf("%d ",arr[f]);
	}
	printf("\n");




	



	return 0;
}