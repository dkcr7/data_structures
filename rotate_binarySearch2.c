#include<stdio.h>

int rotate_binarysearch(int arr[],int low,int high,int num)
{
	if(low>high)
		return -1;

	int mid=low+(high-low)/2;
	if(arr[mid]==num)
		return mid;
	
	if(arr[low]<=arr[mid])
	{
		if(num>=arr[low] && num<=arr[mid])
			return rotate_binarysearch(arr,low,mid-1,num);
		else
			return rotate_binarysearch(arr,mid+1,high,num);
	}
	else
	{
		if(num>=arr[mid+1] && num<=arr[high])
			return rotate_binarysearch(arr,mid+1,high,num);
		else
			return rotate_binarysearch(arr,low,mid-1,num);
	}
}

int main()
{
	int n;
	printf("Size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nelements of array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int num;
	printf("\nEnter the number to be searched: ");
	scanf("%d",&num);
	int ans=rotate_binarysearch(arr,0,n-1,num);
	if(ans==-1)
	{
		printf("Not found\n");
	}
	else
	{
		printf("index: %d\n",ans);
	}
	return 0;
}
