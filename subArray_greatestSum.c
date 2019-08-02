#include<stdio.h>

int subArrayGreatestSum(int *arr,int n)
{
	int max=0,max1=0,st=0,end=0,start=0;
	for(int i=0;i<n;i++)
	{
		max+=arr[i];
		if(max<0)
		{
			max=0;
			st=i+1;
		}
		else if(max1<max)
		{
			max1=max;
			start=st;
			end=i;
		}
	}
	printf("Greatest Sub Array\n");
	for(int i=start;i<=end;i++)
	{
		printf("%d ",arr[i]);
	}
	return max1;
}

int main()
{
	int n=6;
	int arr[]={-1,2,6,-5,4,-2};
	int maxSum=subArrayGreatestSum(arr,n);
	printf("\nSum Of Greatest Sub Array : %d\n",maxSum);
	return 0;
}
