#include<stdio.h>

int pivot(int arr[],int n)
{
	int n1=n-1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]<arr[i])
		{
			return i;
			break;
		}
		if(arr[n1]<arr[n1-1])
		{
			return n1-1;
			break;
		}
		n1--;
	}
}

int binarySearch(int arr[],int srt,int end,int ser)
{
	int mid=srt+(end-srt)/2;
	if(srt>end)
	{
		return -1;
	}
	if(arr[mid]==ser)
	{
		return mid;
	}
	if(arr[mid]>ser)
	{
		return binarySearch(arr,srt,mid-1,ser);
	}
	else
	{
		return binarySearch(arr,mid+1,end,ser);
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
	int p=pivot(arr,n);
	int index=binarySearch(arr,0,p,num);
	int index1;
	if(index==-1)
	{
<<<<<<< HEAD
		index1=binarySearch(arr,p+1,n-1,num);
=======
		index1=binarySearch(arr,p+1,n-p,num);
>>>>>>> binary search in rotated array by dividing array in two arrays
		printf("\nindex: %d\n",index1);
	}
	else
	{
		printf("\nindex: %d\n",index);
	}
	return 0;
}
