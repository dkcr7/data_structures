#include<stdio.h>

int partion(int *arr,int s,int e)
{
	int i=s-1,temp;
	int pivot=arr[e];
	for(int j=s;j<e;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[e];
	arr[e]=temp;
	return i+1;
}

void quickSort(int *arr,int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int p=partion(arr,s,e);
        quickSort(arr,s,p-1);
	quickSort(arr,p+1,e);
}

void subArray(int arr[],int n,int sum)
{
	quickSort(arr,0,n-1);
	int s=0;
	int e=n-1;
	while(s<e)
	{
		if(arr[s]+arr[e]==sum)
		{
			printf("(%d,%d)\n",arr[s],arr[e]);
			s++;
			e--;
		}
		else if(arr[s]+arr[e]<sum)
		{
			s++;
		}
		else
		{
			e--;
		}
	}
}

int main()
{
	int n=6;
	int arr[]={1,4,7,6,3,5};
	int sum=7;
	subArray(arr,n,sum);
	return 0;
}
