#include<stdio.h>

int gcd1(int a,int b)
{
	int res=1;
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			res=i;
		}
	}
	return res;
}

int gcd(int arr[],int l)
{
	int result=1;
	for(int i=0;i<l-1;i++)
	{
		result=gcd1(arr[i],arr[i+1]);
	}
	return result;
}

int lcm(int arr[],int l,int gc)
{
	int ans=arr[0];
	for(int i=1;i<l;i++)
	{
		ans=(arr[i]*ans)/(gcd1(arr[i],ans));
	}
	return ans;
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int res=gcd(arr,n);
	printf("GCD is : %d\n",res);
	int res1=lcm(arr,n,res);
	printf("LCM is : %d\n",res1);
	return 0;
}
