#include<stdio.h>

int minimum_binarysearch(int arr[],int low,int high)
{
	int mid=low+(high-low)/2;
	if(low>high)
		return arr[0];
	if(low==high)
		return arr[low];
	if(arr[mid]<arr[mid-1])
		return arr[mid];
	if(arr[mid+1]<arr[mid])	
		return arr[mid+1];
	if(arr[high]>arr[mid])
		return minimum_binarysearch(arr,low,mid-1);
	return minimum_binarysearch(arr,mid+1,high);
}

int main()
{
	int arr[]={2,3,4,5,6,7,8,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=minimum_binarysearch(arr,0,n-1);
	printf("minimum element is: %d\n",res);

	return 0;
}	
