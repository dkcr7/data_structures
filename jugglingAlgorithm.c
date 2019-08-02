#include<stdio.h>

int gcd(int a,int b)
{
	int res=1;
	for(int i=1;i<=a && i<=b;i++)
		if((a%i==0) && (b%i==0))
			res=i;
	return res;
}

void jugglingAlgo(int arr[],int n,int d)
{
	int gcd1=gcd(d,n);
	for(int i=0;i<gcd1;i++)
	{
		int temp=arr[i];
		int j=i;
		while(1)
		{
			int k=j+d;
			if(k>=n)
			{
				k=k-n;
			}
			if(k==i)
			{
				break;
			}
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	jugglingAlgo(arr,n,11);
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
	
	return 0;
}
